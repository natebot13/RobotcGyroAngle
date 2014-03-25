
//GyroAngle uses timer T4, which makes it unusable. Don't use T4!

void GyroOpen() {
	ClearTimer(T4);
}

int GyroUpdate(tSensors gyro) {
	return time1[T4]*(SensorValue[gyro]/1000);
}


@interface HMVEventWriter : NSObject <HMVEventWriter>

- (void)clearEventsForHomeWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)writeContactSensorEventWithDate:(id)arg1 homeIdentifier:(id)arg2 roomIdentifier:(id)arg3 roomName:(id)arg4 accessoryIdentifier:(id)arg5 accessoryName:(id)arg6 state:(long long)arg7 userIdentifier:(id)arg8 completion:(id /* block */)arg9;
- (void)writeDoorEventWithDate:(id)arg1 homeIdentifier:(id)arg2 roomIdentifier:(id)arg3 roomName:(id)arg4 accessoryIdentifier:(id)arg5 accessoryName:(id)arg6 state:(long long)arg7 userIdentifier:(id)arg8 completion:(id /* block */)arg9;
- (void)writeFakeEventsWithDate:(id)arg1 homeIdentifier:(id)arg2 count:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)writeGarageDoorEventWithDate:(id)arg1 homeIdentifier:(id)arg2 roomIdentifier:(id)arg3 roomName:(id)arg4 accessoryIdentifier:(id)arg5 accessoryName:(id)arg6 state:(long long)arg7 userIdentifier:(id)arg8 completion:(id /* block */)arg9;
- (void)writeLockEventWithDate:(id)arg1 homeIdentifier:(id)arg2 roomIdentifier:(id)arg3 roomName:(id)arg4 accessoryIdentifier:(id)arg5 accessoryName:(id)arg6 state:(long long)arg7 userIdentifier:(id)arg8 completion:(id /* block */)arg9;
- (void)writeSecuritySystemEventWithDate:(id)arg1 homeIdentifier:(id)arg2 roomIdentifier:(id)arg3 roomName:(id)arg4 accessoryIdentifier:(id)arg5 accessoryName:(id)arg6 state:(long long)arg7 userIdentifier:(id)arg8 completion:(id /* block */)arg9;
- (void)writeSmokeDetectorEventWithDate:(id)arg1 homeIdentifier:(id)arg2 roomIdentifier:(id)arg3 roomName:(id)arg4 accessoryIdentifier:(id)arg5 accessoryName:(id)arg6 state:(long long)arg7 userIdentifier:(id)arg8 completion:(id /* block */)arg9;
- (void)writeWindowEventWithDate:(id)arg1 homeIdentifier:(id)arg2 roomIdentifier:(id)arg3 roomName:(id)arg4 accessoryIdentifier:(id)arg5 accessoryName:(id)arg6 state:(long long)arg7 userIdentifier:(id)arg8 completion:(id /* block */)arg9;

@end

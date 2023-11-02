
@protocol CBCentralManagerPrivateDelegate <CBCentralManagerDelegate>

@optional

- (void)centralManager:(CBCentralManager *)arg1 application:(NSString *)arg2 isActive:(bool)arg3;
- (void)centralManager:(CBCentralManager *)arg1 canSendDataToPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didChannelSoundingProcedureEvent:(CBPeripheral *)arg2 results:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)centralManager:(CBCentralManager *)arg1 didDiscoverMultiplePeripherals:(NSArray *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didFailToScanWithError:(NSError *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didFindPeripheral:(CBPeripheral *)arg2 forType:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didLosePeripheral:(CBPeripheral *)arg2 forType:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didLoseZone:(NSData *)arg2 mask:(NSData *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didReceiveData:(NSData *)arg2 fromPeripheral:(CBPeripheral *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didSendBytes:(NSNumber *)arg2 toPeripheral:(CBPeripheral *)arg3 withError:(NSError *)arg4;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateConnectionParameters:(CBPeripheral *)arg2 interval:(NSNumber *)arg3 latency:(NSNumber *)arg4 supervisionTimeout:(NSNumber *)arg5;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateControllerBTClockDictForPeripheral:(CBPeripheral *)arg2 results:(NSDictionary *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateControllerBTClockForPeripheral:(CBPeripheral *)arg2 eventType:(NSNumber *)arg3 seconds:(NSNumber *)arg4 microseconds:(NSNumber *)arg5 localClock:(NSNumber *)arg6 remoteClock:(NSNumber *)arg7;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateFindMyPeripherals:(NSArray *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateMTUForPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didUpdatePeripheralConnectionState:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateRSSIStatisticsDetectionForPeripheral:(CBPeripheral *)arg2 results:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateScanParams:(NSDictionary *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateUsageStatisticEvent:(CBPeripheral *)arg2 results:(NSDictionary *)arg3 error:(NSError *)arg4;
- (NSArray *)retrieveConnectingPeripherals;

@end

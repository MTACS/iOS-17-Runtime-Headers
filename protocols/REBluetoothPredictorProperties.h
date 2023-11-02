
@protocol REBluetoothPredictorProperties <REExportedInterface>

@required

- (bool)connectedToCar;
- (bool)connectedToSpeaker;
- (NSDictionary *)localDevices;

@end

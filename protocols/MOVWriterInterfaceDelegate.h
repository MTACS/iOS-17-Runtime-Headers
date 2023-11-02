
@protocol MOVWriterInterfaceDelegate <NSObject>

@optional

- (void)didEncounterError:(NSError *)arg1;
- (void)didFailWithError:(NSError *)arg1;
- (void)didFinishRecording;
- (void)isReadyToRecord;

@end

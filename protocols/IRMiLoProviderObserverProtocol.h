
@protocol IRMiLoProviderObserverProtocol <NSObject>

@required

- (void)onLslConnectionConnectedSuccesfullyWithNServiceUuid:(NSUUID *)arg1;
- (void)onMiLoServiceIdentifierUnrecognized:(NSUUID *)arg1;
- (void)onPrediction:(IRMiLoProviderLslPredictionResults *)arg1;
- (void)onPredictionRealTime:(IRMiLoProviderLslPredictionResults *)arg1;
- (void)onUpdateLOIType:(int)arg1 WithLOIIdentifier:(NSString *)arg2;

@end

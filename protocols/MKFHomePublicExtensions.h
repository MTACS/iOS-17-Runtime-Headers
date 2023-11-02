
@protocol MKFHomePublicExtensions <MKFApplicationDataContainer>

@required

- (NSNumber *)audioAnalysisClassifierOptions;
- (NSNumber *)didOnboardEventLog;
- (NSNumber *)eventLogDuration;
- (NSNumber *)eventLogEnabled;
- (<MKFGuestAccessCode> *)guestAccessCode:(NSString *)arg1 withLabel:(NSString *)arg2 context:(NSManagedObjectContext *)arg3;
- (void)setAudioAnalysisClassifierOptions:(NSNumber *)arg1;
- (void)setDidOnboardEventLog:(NSNumber *)arg1;
- (void)setEventLogDuration:(NSNumber *)arg1;
- (void)setEventLogEnabled:(NSNumber *)arg1;

@end

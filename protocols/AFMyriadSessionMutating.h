
@protocol AFMyriadSessionMutating <NSObject>

@required

- (void)setCurrentElectionAdvertisementData:(NSData *)arg1;
- (void)setCurrentElectionAdvertisementId:(NSUUID *)arg1;
- (void)setElectionAdvertisementDataByIds:(NSDictionary *)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (void)setSessionId:(NSUUID *)arg1;

@end

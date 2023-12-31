
@protocol DTSamplingServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (void)setOutputRate:(NSNumber *)arg1;
- (void)setSamplingRate:(NSNumber *)arg1;
- (void)setTargetPid:(NSNumber *)arg1;
- (void)startSampling;
- (void)stopSampling;

@end

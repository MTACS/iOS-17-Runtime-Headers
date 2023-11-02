
@protocol DTGraphicsServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (NSDictionary *)availableStatistics;
- (void)cleanup;
- (NSArray *)driverNames;
- (void)setSamplingRate:(NSNumber *)arg1;
- (void)setValue:(NSNumber *)arg1 forSwitchName:(NSString *)arg2;
- (void)startSamplingAtTimeInterval:(NSNumber *)arg1;
- (void)startSamplingAtTimeInterval:(NSNumber *)arg1 processIdentifier:(NSNumber *)arg2;
- (void)stopSampling;
- (NSNumber *)valueForSwitch:(NSString *)arg1;

@end

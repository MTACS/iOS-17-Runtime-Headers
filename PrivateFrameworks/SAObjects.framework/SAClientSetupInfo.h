
@interface SAClientSetupInfo : SABaseClientBoundCommand

@property (nonatomic) bool delay;
@property (nonatomic) double threshold;

+ (id)clientSetupInfo;
+ (id)clientSetupInfoWithDictionary:(id)arg1 context:(id)arg2;

- (bool)delay;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setDelay:(bool)arg1;
- (void)setThreshold:(double)arg1;
- (double)threshold;

@end

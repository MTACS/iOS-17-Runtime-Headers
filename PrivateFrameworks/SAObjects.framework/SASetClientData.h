
@interface SASetClientData : SABaseClientBoundCommand

@property (nonatomic, copy) NSNumber *holdToTalkThresholdInMilliseconds;

+ (id)setClientData;
+ (id)setClientDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)holdToTalkThresholdInMilliseconds;
- (bool)requiresResponse;
- (void)setHoldToTalkThresholdInMilliseconds:(id)arg1;

@end

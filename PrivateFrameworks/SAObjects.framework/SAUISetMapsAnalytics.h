
@interface SAUISetMapsAnalytics : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *extSessionGuid;
@property (nonatomic, copy) NSDate *extSessionGuidCreatedTimestamp;

- (id)encodedClassName;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setExtSessionGuid:(id)arg1;
- (void)setExtSessionGuidCreatedTimestamp:(id)arg1;

@end

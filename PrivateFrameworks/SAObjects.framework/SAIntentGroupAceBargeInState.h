
@interface SAIntentGroupAceBargeInState : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *bargeInModes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *durationSincePreviousTTSFinish;
@property (nonatomic, copy) NSNumber *durationSincePreviousTTSStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)bargeInModes;
- (id)durationSincePreviousTTSFinish;
- (id)durationSincePreviousTTSStart;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setBargeInModes:(id)arg1;
- (void)setDurationSincePreviousTTSFinish:(id)arg1;
- (void)setDurationSincePreviousTTSStart:(id)arg1;

@end

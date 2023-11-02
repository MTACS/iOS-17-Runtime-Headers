
@interface REUIElementIntentAction : REUIElementDonatedActionAction

@property (nonatomic, readonly) INIntent *intent;

- (id)_newPerformer;
- (void)_performWithContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intent;

@end

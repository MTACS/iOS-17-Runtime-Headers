
@interface SBRemovalDodgingModifier : SBDodgingModifier {
    NSUUID * _completionIdentifier;
    NSString * _identifier;
}

@property (nonatomic, retain) NSUUID *completionIdentifier;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (long long)animationBehaviorModeForIdentifier:(id)arg1;
- (id)completionIdentifier;
- (id)handleAnimationCompletionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)modelForInvalidatedModel:(id)arg1;
- (void)setCompletionIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end


@protocol HREActionRecommendation <NSObject>

@required

- (NSSet *)actions;
- (void)addAction:(HFActionBuilder *)arg1;
- (void)addAction:(HFActionBuilder *)arg1 allowEditingExistingActions:(bool)arg2;
- (void)addActions:(NSSet *)arg1;
- (void)addActions:(NSSet *)arg1 allowEditingExistingActions:(bool)arg2;
- (NSSet *)addedActions;
- (HREActionVarianceCollection *)allowedVariance;
- (void)removeAction:(HFActionBuilder *)arg1;
- (void)removeActions:(NSSet *)arg1;
- (void)setAllowedVariance:(HREActionVarianceCollection *)arg1;

@end

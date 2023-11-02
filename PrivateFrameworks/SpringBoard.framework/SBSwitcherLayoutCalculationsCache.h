
@interface SBSwitcherLayoutCalculationsCache : NSObject {
    NSDictionary * _cachedLayoutCalculationsByKey;
    <SBSwitcherLayoutCalculationsCacheDelegate> * _delegate;
    SBSwitcherLayoutCalculationsCacheValidityToken * _validityToken;
}

@property (nonatomic) <SBSwitcherLayoutCalculationsCacheDelegate> *delegate;
@property (nonatomic, readonly) SBSwitcherLayoutCalculationsCacheValidityToken *validityToken;

- (void).cxx_destruct;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKey:(id)arg1 validityToken:(id)arg2 fallback:(id /* block */)arg3;
- (id)init;
- (void)rebuildIfNecessaryForValidityToken:(id)arg1;
- (double)scaleForKey:(id)arg1 validityToken:(id)arg2 fallback:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (id)validityToken;

@end

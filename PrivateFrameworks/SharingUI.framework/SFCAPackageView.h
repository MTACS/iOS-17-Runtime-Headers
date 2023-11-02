
@interface SFCAPackageView : UIView <CAStateControllerDelegate> {
    NSMutableArray * _completionHandlers;
    float  _duration;
    CAStateController * _stateController;
}

@property (readonly) NSMutableArray *completionHandlers;
@property (readonly) float duration;
@property (getter=isInitialState, readonly) bool initialState;
@property (readonly) CALayer *packageRootLayer;
@property (retain) CAStateController *stateController;
@property (readonly, copy) NSString *stateName;

+ (id)keyPathsForValuesAffectingPackageRootLayer;

- (void).cxx_destruct;
- (void)_changeAppearance;
- (id)_getStateWithName:(id)arg1;
- (id)_newStateControllerWithSuperlayer:(id)arg1;
- (void)_stcaPackageViewCommonInit;
- (void)animateToInitialStateWithCompletionHandler:(id /* block */)arg1;
- (void)animateToStateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)completionHandlers;
- (float)duration;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isInitialState;
- (id)packageRootLayer;
- (void)setInitialState;
- (void)setStateController:(id)arg1;
- (void)setStateName:(id)arg1;
- (id)stateController;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(bool)arg3;
- (id)stateName;
- (unsigned long long)statesCount;
- (void)traitCollectionDidChange:(id)arg1;

@end

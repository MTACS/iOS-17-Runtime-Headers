
@interface SBInsertionDodgingModifier : SBDodgingModifier {
    NSString * _identifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialSize;
    unsigned long long  _phase;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialCenter;
@property (nonatomic) struct CGSize { double x1; double x2; } initialSize;
@property (nonatomic) unsigned long long phase;

- (void).cxx_destruct;
- (id)_animationDidCompleteEventName;
- (id)_modelDidUpdateEventName;
- (long long)animationBehaviorModeForIdentifier:(id)arg1;
- (id)framesForIdentifiers;
- (id)handleAnimationCompletionEvent:(id)arg1;
- (id)handleCustomEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 initialCenter:(struct CGPoint { double x1; double x2; })arg2 initialSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })initialCenter;
- (struct CGSize { double x1; double x2; })initialSize;
- (id)modelForInvalidatedModel:(id)arg1;
- (unsigned long long)phase;
- (void)setIdentifier:(id)arg1;
- (void)setInitialCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPhase:(unsigned long long)arg1;

@end

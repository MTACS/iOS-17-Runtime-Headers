
@interface SBInCallPresentationSceneUpdateContext : NSObject {
    NSString * _analyticsSource;
    id /* block */  _completionHandler;
    long long  _executionTarget;
    id /* block */  _postSceneUpdateHandler;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceFrame;
    id /* block */  _transitionRequestBuilderBlock;
    id /* block */  _validatorHandler;
}

@property (nonatomic, copy) NSString *analyticsSource;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) long long executionTarget;
@property (nonatomic, copy) id /* block */ postSceneUpdateHandler;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceFrame;
@property (nonatomic, copy) id /* block */ transitionRequestBuilderBlock;
@property (nonatomic, copy) id /* block */ validatorHandler;

- (void).cxx_destruct;
- (id)analyticsSource;
- (id /* block */)completionHandler;
- (long long)executionTarget;
- (id)initWithReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 analyticsSource:(id)arg2 transitionRequestBuilderBlock:(id /* block */)arg3;
- (id /* block */)postSceneUpdateHandler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrame;
- (void)setAnalyticsSource:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setExecutionTarget:(long long)arg1;
- (void)setPostSceneUpdateHandler:(id /* block */)arg1;
- (void)setReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionRequestBuilderBlock:(id /* block */)arg1;
- (void)setValidatorHandler:(id /* block */)arg1;
- (id /* block */)transitionRequestBuilderBlock;
- (id /* block */)validatorHandler;

@end

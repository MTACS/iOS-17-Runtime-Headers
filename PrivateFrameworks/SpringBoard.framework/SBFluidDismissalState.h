
@interface SBFluidDismissalState : NSObject <SiriUIFluidDismissalState> {
    double  _backgroundWeighting;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentRect;
    double  _contentWeighting;
    long long  _dismissalType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _homeGrabberContentRect;
    long long  _transitionPhase;
}

@property (nonatomic) double backgroundWeighting;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (nonatomic) double contentWeighting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dismissalType;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } homeGrabberContentRect;
@property (readonly) Class superclass;
@property (nonatomic) long long transitionPhase;

- (double)backgroundWeighting;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (double)contentWeighting;
- (long long)dismissalType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })homeGrabberContentRect;
- (void)setBackgroundWeighting:(double)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentWeighting:(double)arg1;
- (void)setDismissalType:(long long)arg1;
- (void)setHomeGrabberContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionPhase:(long long)arg1;
- (long long)transitionPhase;

@end

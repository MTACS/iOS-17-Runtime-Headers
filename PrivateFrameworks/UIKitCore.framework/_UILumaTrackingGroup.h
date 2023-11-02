
@interface _UILumaTrackingGroup : NSObject <_UILumaTrackingBackdropViewGroupDelegate> {
    unsigned long long  _backgroundLuminanceLevel;
    <_UILumaTrackingGroupDelegate> * _delegate;
    struct { 
        unsigned int scheduledUpdate : 1; 
    }  _lumaTrackingGroupFlags;
    NSMutableArray * _lumaValues;
    NSArray * _lumaViews;
    double  _minimumDifference;
    NSMapTable * _outliers;
    bool  _paused;
    struct { 
        double minimum; 
        double maximum; 
    }  _transitionBoundaries;
}

@property (nonatomic, readonly) unsigned long long backgroundLuminanceLevel;
@property (nonatomic) double minimumDifference;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) struct { double x1; double x2; } transitionBoundaries;

- (void).cxx_destruct;
- (void)_updateLumaValue;
- (void)backgroundLumaView:(id)arg1 didChangeLuma:(double)arg2;
- (unsigned long long)backgroundLuminanceLevel;
- (id)initWithTransitionBoundaries:(struct { double x1; double x2; })arg1 minimumDifference:(double)arg2 delegate:(id)arg3 views:(id)arg4;
- (bool)isPaused;
- (double)minimumDifference;
- (void)setMinimumDifference:(double)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTransitionBoundaries:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })transitionBoundaries;
- (void)unpauseAfterSeedingWithLumaLevel:(unsigned long long)arg1;

@end

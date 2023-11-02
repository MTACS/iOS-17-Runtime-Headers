
@interface PFParallaxIntermediateLayout : NSObject {
    double  _cropScore;
    unsigned long long  _headroomStrategy;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inactiveRect;
    unsigned long long  _inactiveStrategy;
    double  _layoutScore;
    unsigned long long  _overlapStrategy;
    unsigned long long  _parallaxStrategy;
    double  _timeBottomOverlap;
    double  _timeTopOverlap;
    double  _uninflatedUnsafeAreaOverlap;
    double  _unsafeAreaOverlap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
    unsigned long long  _zoomStrategy;
}

@property (nonatomic, readonly) double cropScore;
@property (nonatomic, readonly) NSString *debugStub;
@property (nonatomic, readonly) unsigned long long headroomStrategy;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inactiveRect;
@property (nonatomic, readonly) unsigned long long inactiveStrategy;
@property (nonatomic, readonly) double layoutScore;
@property (nonatomic, readonly) unsigned long long overlapStrategy;
@property (nonatomic, readonly) unsigned long long parallaxStrategy;
@property (nonatomic, readonly) double timeBottomOverlap;
@property (nonatomic, readonly) double timeTopOverlap;
@property (nonatomic, readonly) double uninflatedUnsafeAreaOverlap;
@property (nonatomic, readonly) double unsafeAreaOverlap;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic, readonly) unsigned long long zoomStrategy;

- (double)clockOverlapAcceptabilityForLayoutConfiguration:(id)arg1 inflated:(bool)arg2;
- (bool)clockOverlapAcceptableForLayoutConfiguration:(id)arg1;
- (double)cropScore;
- (id)debugDescription;
- (id)debugStub;
- (unsigned long long)headroomStrategy;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inactiveRect;
- (unsigned long long)inactiveStrategy;
- (id)initWithVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inactiveRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomStrategy:(unsigned long long)arg3 overlapStrategy:(unsigned long long)arg4 parallaxStrategy:(unsigned long long)arg5 inactiveStrategy:(unsigned long long)arg6 headroomStrategy:(unsigned long long)arg7;
- (id)initWithVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inactiveRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomStrategy:(unsigned long long)arg3 overlapStrategy:(unsigned long long)arg4 parallaxStrategy:(unsigned long long)arg5 inactiveStrategy:(unsigned long long)arg6 headroomStrategy:(unsigned long long)arg7 cropScore:(double)arg8 layoutScore:(double)arg9 timeBottomOverlap:(double)arg10 timeTopOverlap:(double)arg11 unsafeAreaOverlap:(double)arg12 uninflatedUnsafeAreaOverlap:(double)arg13;
- (double)layoutScore;
- (unsigned long long)overlapStrategy;
- (unsigned long long)parallaxStrategy;
- (double)timeBottomOverlap;
- (double)timeTopOverlap;
- (double)uninflatedUnsafeAreaOverlap;
- (double)unsafeAreaOverlap;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (unsigned long long)zoomStrategy;

@end

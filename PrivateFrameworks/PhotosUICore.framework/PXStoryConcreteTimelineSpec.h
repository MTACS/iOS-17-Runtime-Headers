
@interface PXStoryConcreteTimelineSpec : PXFeatureSpec <PXStoryTimelineSpec> {
    NSIndexSet * _allowedTransitionKinds;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _fixedSegmentDuration;
    long long  _layoutDirection;
    double  _nUpDividerWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
    bool  _wantsTitles;
}

@property (nonatomic, retain) NSIndexSet *allowedTransitionKinds;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } fixedSegmentDuration;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) double nUpDividerWidth;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;
@property (nonatomic) bool wantsTitles;

- (void).cxx_destruct;
- (id)allowedTransitionKinds;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fixedSegmentDuration;
- (unsigned long long)hash;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)layoutDirection;
- (double)nUpDividerWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setAllowedTransitionKinds:(id)arg1;
- (void)setFixedSegmentDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setWantsTitles:(bool)arg1;
- (struct CGSize { double x1; double x2; })viewportSize;
- (bool)wantsTitles;

@end

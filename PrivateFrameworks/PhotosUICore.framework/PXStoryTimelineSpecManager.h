
@interface PXStoryTimelineSpecManager : PXFeatureSpecManager {
    NSIndexSet * _allowedTransitionKinds;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _fixedSegmentDuration;
    bool  _wantsTitles;
}

@property (nonatomic, readonly) NSIndexSet *allowedTransitionKinds;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } fixedSegmentDuration;
@property (nonatomic, readonly) <PXStoryTimelineSpec> *timelineSpec;
@property (nonatomic, readonly) bool wantsTitles;

- (void).cxx_destruct;
- (id)allowedTransitionKinds;
- (unsigned long long)defaultChangesToUpdateFor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fixedSegmentDuration;
- (id)initWithExtendedTraitCollection:(id)arg1 configuration:(id)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (Class)specClass;
- (id)timelineSpec;
- (bool)wantsTitles;

@end

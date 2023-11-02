
@interface _PXStoryScrollPositionReference : NSObject {
    struct { 
        long long firstSegmentIdentifier; 
        double secondSegmentMixFactor; 
        long long secondSegmentIdentifier; 
    }  _scrollPosition;
    <PXStoryTimeline> * _timeline;
}

@property (nonatomic, readonly) struct { long long x1; double x2; long long x3; } scrollPosition;
@property (nonatomic, readonly) <PXStoryTimeline> *timeline;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScrollPosition:(struct { long long x1; double x2; long long x3; })arg1;
- (struct { long long x1; double x2; long long x3; })scrollPosition;
- (id)timeline;

@end

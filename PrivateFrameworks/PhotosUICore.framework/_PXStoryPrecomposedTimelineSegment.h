
@interface _PXStoryPrecomposedTimelineSegment : NSObject {
    <PXStoryClipComposition> * _clipComposition;
    BOOL  _transitionKind;
}

@property (nonatomic, retain) <PXStoryClipComposition> *clipComposition;
@property (nonatomic) BOOL transitionKind;

- (void).cxx_destruct;
- (id)clipComposition;
- (id)initWithClipComposition:(id)arg1 transitionKind:(BOOL)arg2;
- (void)setClipComposition:(id)arg1;
- (void)setTransitionKind:(BOOL)arg1;
- (BOOL)transitionKind;

@end

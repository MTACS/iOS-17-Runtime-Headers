
@interface PXStoryTransitionProducer : NSObject {
    NSArray * _fallbackTransitionReasons;
}

@property (nonatomic, retain) NSArray *fallbackTransitionReasons;

+ (bool)isSupportedTransitionWithKind:(BOOL)arg1 betweenSegmentWithClipComposition:(struct { long long x1; bool x2; long long x3; double x4; long long x5; })arg2 andSegmentWithClipComposition:(struct { long long x1; bool x2; long long x3; double x4; long long x5; })arg3;
+ (bool)isSupportedTransitionWithKind:(BOOL)arg1 fromSegmentIdentifier:(long long)arg2 toSegmentIdentifier:(long long)arg3 inTimeline:(id)arg4;
+ (id)supportedTransitionKinds;

- (void).cxx_destruct;
- (id)_panTransitionsForOrderOutSegment:(id)arg1 orderInSegment:(id)arg2 viewportSize:(struct CGSize { double x1; double x2; })arg3 transitionInfo:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })arg4;
- (void)_recordFallbackToCutTransitionBetweenSegmentWithIdentifier:(long long)arg1 andSegmentWithIdentifier:(long long)arg2 reason:(id)arg3;
- (id)_wipeTransitionsForOrderOutSegment:(id)arg1 orderInSegment:(id)arg2 viewportSize:(struct CGSize { double x1; double x2; })arg3 dividerWidth:(double)arg4 transitionInfo:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })arg5;
- (id)fallbackTransitionReasons;
- (void)setFallbackTransitionReasons:(id)arg1;
- (id)transitionsWithConfiguration:(id)arg1;

@end

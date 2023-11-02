
@interface _UIDefaultSwipeViewManipulator : NSObject <_UISwipeViewManipulator> {
    double  _swipedViewRestingOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double swipedViewRestingOffset;

- (void)moveSwipedView:(id)arg1 atIndexPath:(id)arg2 withSwipeInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg3 animator:(id)arg4;
- (void)removeAnimationsFromSwipedView:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })restingFrameForSwipedView:(id)arg1 atIndexPath:(id)arg2;
- (void)setSwipedViewRestingOffset:(double)arg1;
- (double)swipedViewRestingOffset;

@end

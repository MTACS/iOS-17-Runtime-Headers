
@protocol PKHorizontalScrollingChildLayoutDataSource <NSObject>

@required

- (double)alphaForIndexPath:(NSIndexPath *)arg1 visible:(bool)arg2 transition:(double)arg3;
- (unsigned int)horizontalAlignmentForSection:(long long)arg1;
- (double)lineSpacingForSection:(long long)arg1;

@end

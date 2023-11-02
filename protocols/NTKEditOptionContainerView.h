
@protocol NTKEditOptionContainerView <NSObject>

@required

- (void)enumerateSideViewsWithBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, UIView *, bool*, void*
- (unsigned long long)numberOfSides;
- (unsigned long long)numberOfVisibleSides;
- (void)setView:(UIView *)arg1 forSideAtIndex:(unsigned long long)arg2;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;
- (void)transitionToSideAtIndex:(unsigned long long)arg1;
- (UIView *)viewForSideAtIndex:(unsigned long long)arg1;

@end

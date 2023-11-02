
@protocol MobileSafariWindowDelegate <NSObject>

@optional

- (void)safariWindow:(MobileSafariWindow *)arg1 didEndAllTouchesAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)safariWindow:(MobileSafariWindow *)arg1 statusBarChangedFromHeight:(double)arg2 toHeight:(double)arg3;

@end


@interface UIStatusBarPersonNameItemView : UIStatusBarItemView {
    double  _letterSpacing;
    double  _maxWidth;
    NSString * _personNameString;
}

- (void).cxx_destruct;
- (bool)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2;
- (id)accessibilityHUDRepresentation;
- (double)addContentOverlap:(double)arg1;
- (id)contentsImage;
- (double)extraRightPadding;
- (long long)legibilityStyle;
- (double)resetContentOverlap;
- (double)standardPadding;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end

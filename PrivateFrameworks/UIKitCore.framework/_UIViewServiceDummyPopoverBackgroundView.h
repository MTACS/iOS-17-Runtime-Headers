
@interface _UIViewServiceDummyPopoverBackgroundView : UIPopoverBackgroundView {
    unsigned long long  arrowDirection;
    double  arrowOffset;
}

+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsets;
+ (bool)wantsDefaultContentAppearance;

- (struct CGSize { double x1; double x2; })_shadowOffset;
- (double)_shadowOpacity;
- (double)_shadowRadius;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;

@end

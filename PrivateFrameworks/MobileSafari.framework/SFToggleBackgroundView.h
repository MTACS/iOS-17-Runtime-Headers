
@interface SFToggleBackgroundView : UIView {
    long long  _cornerRoundingMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _shapeSize;
}

+ (Class)layerClass;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;

@end

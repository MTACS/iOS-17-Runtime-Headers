
@interface _UIPlatterShadowSettings : NSObject {
    UIColor * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _shadowOpacity;
    double  _shadowRadius;
}

@property (nonatomic, copy) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;

- (void).cxx_destruct;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (double)shadowRadius;

@end

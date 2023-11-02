
@interface AVMobileContentTag : NSObject {
    UIColor * _labelTextColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    float  _normalizedCornerRadius;
    unsigned long long  _placement;
    UIColor * _tintColor;
    NSString * _title;
}

@property (nonatomic, readonly) UIColor *labelTextColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic, readonly) float normalizedCornerRadius;
@property (nonatomic, readonly) unsigned long long placement;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) NSString *title;

+ (id)_liveContentTagWithTintColor:(id)arg1 withTextColor:(id)arg2;
+ (id)adContentTag;
+ (id)adContentTagWithTintColor:(id)arg1;
+ (id)liveContentTag;
+ (id)liveEdgeContentTag;

- (void).cxx_destruct;
- (id)_initInternal;
- (id)labelTextColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (float)normalizedCornerRadius;
- (unsigned long long)placement;
- (id)tintColor;
- (id)title;

@end

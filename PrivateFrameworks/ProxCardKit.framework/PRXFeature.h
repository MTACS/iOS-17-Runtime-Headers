
@interface PRXFeature : NSObject {
    NSString * _detailText;
    id /* block */  _handler;
    UIImage * _icon;
    UIView * _imageView;
    double  _imageViewSize;
    bool  _on;
    UISwitch * _switchControl;
    UIColor * _tintColor;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *detailText;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) UIView *imageView;
@property (nonatomic) double imageViewSize;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic) UISwitch *switchControl;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)featureWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
+ (id)featureWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 tintColor:(id)arg4;
+ (id)optionalFeatureWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 tintColor:(id)arg4 valueChangedBlock:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)detailText;
- (id /* block */)handler;
- (id)icon;
- (id)imageView;
- (double)imageViewSize;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 tintColor:(id)arg4 valueChangedBlock:(id /* block */)arg5;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 imageView:(id)arg3 valueChangedBlock:(id /* block */)arg4;
- (bool)isOn;
- (void)setImageViewSize:(double)arg1;
- (void)setOn:(bool)arg1;
- (void)setSwitchControl:(id)arg1;
- (id)switchControl;
- (id)tintColor;
- (id)title;

@end

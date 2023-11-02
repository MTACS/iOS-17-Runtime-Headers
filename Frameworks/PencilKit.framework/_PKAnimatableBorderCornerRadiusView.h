
@interface _PKAnimatableBorderCornerRadiusView : UIView

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)borderColor;
- (double)borderWidth;
- (double)cornerRadius;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;

@end

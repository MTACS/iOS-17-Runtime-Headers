
@interface AVPresentationContainerViewAppearanceProxy : NSObject {
    UIView * _actualView;
    UIColor * _backgroundColor;
    bool  _clipsToBounds;
    NSString * _cornerCurve;
    double  _cornerRadius;
    unsigned long long  _maskedCorners;
}

@property (nonatomic) UIView *actualView;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) bool clipsToBounds;
@property (nonatomic, retain) NSString *cornerCurve;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;

- (void).cxx_destruct;
- (id)actualView;
- (id)backgroundColor;
- (bool)clipsToBounds;
- (id)cornerCurve;
- (double)cornerRadius;
- (unsigned long long)maskedCorners;
- (void)setActualView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setCornerCurve:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;

@end

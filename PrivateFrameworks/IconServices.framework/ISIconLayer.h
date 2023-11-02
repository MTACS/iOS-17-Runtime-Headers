
@interface ISIconLayer : CALayer <ISIconManagerObserver> {
    unsigned long long  _backgroundStyle;
    unsigned long long  _badgeOptions;
    bool  _drawBorder;
    ISIcon * _icon;
    unsigned long long  _iconShape;
    unsigned long long  _shape;
    bool  _shouldApplyMask;
    unsigned long long  _variantOptions;
}

@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long badgeOptions;
@property (nonatomic) bool drawBorder;
@property (nonatomic, retain) ISIcon *icon;
@property (nonatomic) unsigned long long iconShape;
@property (nonatomic) bool shouldApplyMask;
@property (nonatomic) unsigned long long variantOptions;

- (void).cxx_destruct;
- (unsigned long long)backgroundStyle;
- (unsigned long long)badgeOptions;
- (bool)drawBorder;
- (id)icon;
- (void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2;
- (unsigned long long)iconShape;
- (id)init;
- (id)initWithIcon:(id)arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setBadgeOptions:(unsigned long long)arg1;
- (void)setDrawBorder:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconShape:(unsigned long long)arg1;
- (void)setShouldApplyMask:(bool)arg1;
- (void)setVariantOptions:(unsigned long long)arg1;
- (bool)shouldApplyMask;
- (unsigned long long)variantOptions;

@end

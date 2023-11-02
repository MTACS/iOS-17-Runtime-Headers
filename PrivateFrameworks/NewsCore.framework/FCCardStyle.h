
@interface FCCardStyle : NSObject <FCCardStyleProviding> {
    FCColor * _cardBackgroundColor;
    FCColor * _cardForegroundColor;
    FCColor * _ctaBackgroundColor;
    FCColor * _ctaForegroundColor;
    FCColor * _eyebrowForegroundColor;
    FCColorGradient * _sauceGradient;
    FCColor * _titleForegroundColor;
}

@property (nonatomic, copy) FCColor *cardBackgroundColor;
@property (nonatomic, copy) FCColor *cardForegroundColor;
@property (nonatomic, copy) FCColor *ctaBackgroundColor;
@property (nonatomic, copy) FCColor *ctaForegroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) FCColor *eyebrowForegroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) FCColorGradient *sauceGradient;
@property (readonly) Class superclass;
@property (nonatomic, copy) FCColor *titleForegroundColor;

+ (id)styleWithConfigDict:(id)arg1;

- (void).cxx_destruct;
- (id)cardBackgroundColor;
- (id)cardForegroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ctaBackgroundColor;
- (id)ctaForegroundColor;
- (id)eyebrowForegroundColor;
- (unsigned long long)hash;
- (id)initWithTitleForegroundColor:(id)arg1 eyebrowForegroundColor:(id)arg2 cardBackgroundColor:(id)arg3 cardForegroundColor:(id)arg4 sauceGradient:(id)arg5 ctaBackgroundColor:(id)arg6 ctaForegroundColor:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)sauceGradient;
- (void)setCardBackgroundColor:(id)arg1;
- (void)setCardForegroundColor:(id)arg1;
- (void)setCtaBackgroundColor:(id)arg1;
- (void)setCtaForegroundColor:(id)arg1;
- (void)setEyebrowForegroundColor:(id)arg1;
- (void)setSauceGradient:(id)arg1;
- (void)setTitleForegroundColor:(id)arg1;
- (id)titleForegroundColor;

@end

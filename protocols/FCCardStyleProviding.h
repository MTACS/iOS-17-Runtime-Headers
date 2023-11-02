
@protocol FCCardStyleProviding <NSObject, NSCopying>

@required

- (FCColor *)cardBackgroundColor;
- (FCColor *)cardForegroundColor;
- (FCColor *)ctaBackgroundColor;
- (FCColor *)ctaForegroundColor;
- (FCColor *)eyebrowForegroundColor;
- (FCColorGradient *)sauceGradient;
- (FCColor *)titleForegroundColor;

@end

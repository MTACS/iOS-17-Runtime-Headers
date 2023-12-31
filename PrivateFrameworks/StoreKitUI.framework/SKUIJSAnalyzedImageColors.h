
@interface SKUIJSAnalyzedImageColors : IKJSObject <SKUIJSAnalyzedImageColors> {
    SKUIJSColor * _backgroundColor;
    bool  _isBackgroundLight;
    SKUIJSColor * _textPrimaryColor;
    SKUIJSColor * _textSecondaryColor;
}

@property (nonatomic, readonly) SKUIJSColor *backgroundColor;
@property (nonatomic, readonly) bool isBackgroundLight;
@property (nonatomic, readonly) SKUIJSColor *textPrimaryColor;
@property (nonatomic, readonly) SKUIJSColor *textSecondaryColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)initWithAppContext:(id)arg1 analyzedImageColors:(id)arg2;
- (bool)isBackgroundLight;
- (id)textPrimaryColor;
- (id)textSecondaryColor;

@end


@interface SUUIJSAnalyzedImageColors : IKJSObject <SUUIJSAnalyzedImageColors> {
    SUUIJSColor * _backgroundColor;
    bool  _isBackgroundLight;
    SUUIJSColor * _textPrimaryColor;
    SUUIJSColor * _textSecondaryColor;
}

@property (nonatomic, readonly) SUUIJSColor *backgroundColor;
@property (nonatomic, readonly) bool isBackgroundLight;
@property (nonatomic, readonly) SUUIJSColor *textPrimaryColor;
@property (nonatomic, readonly) SUUIJSColor *textSecondaryColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)initWithAppContext:(id)arg1 analyzedImageColors:(id)arg2;
- (bool)isBackgroundLight;
- (id)textPrimaryColor;
- (id)textSecondaryColor;

@end

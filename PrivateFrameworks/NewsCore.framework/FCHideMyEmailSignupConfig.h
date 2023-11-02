
@interface FCHideMyEmailSignupConfig : NSObject {
    FCContentColorPair * _backgroundColor;
    NSString * _ctaButtonText;
    NSString * _headline;
    double  _headlineLineSpacing;
    bool  _isEnabled;
    FCConfigHyperlinkText * _policyText;
    FCContentColorPair * _primaryColor;
    FCContentColorPair * _secondaryColor;
    NSString * _subheadline;
    FCContentColorPair * _tertiaryColor;
    bool  _useChannelFont;
}

@property (nonatomic, readonly) FCContentColorPair *backgroundColor;
@property (nonatomic, readonly) NSString *ctaButtonText;
@property (nonatomic, readonly) NSString *headline;
@property (nonatomic, readonly) double headlineLineSpacing;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) FCConfigHyperlinkText *policyText;
@property (nonatomic, readonly) FCContentColorPair *primaryColor;
@property (nonatomic, readonly) FCContentColorPair *secondaryColor;
@property (nonatomic, readonly) NSString *subheadline;
@property (nonatomic, readonly) FCContentColorPair *tertiaryColor;
@property (nonatomic, readonly) bool useChannelFont;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)ctaButtonText;
- (id)headline;
- (double)headlineLineSpacing;
- (id)initDefault;
- (id)initWithConfigDictionary:(id)arg1;
- (bool)isEnabled;
- (id)policyText;
- (id)primaryColor;
- (id)secondaryColor;
- (id)subheadline;
- (id)tertiaryColor;
- (bool)useChannelFont;

@end

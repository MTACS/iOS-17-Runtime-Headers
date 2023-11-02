
@interface PCNativeRepresentation : APRepresentationData {
    NSString * _accessibleAdCopy;
    NSString * _accessibleHeadline;
    NSURL * _actionURL;
    NSString * _adCopy;
    long long  _adFormatType;
    long long  _adType;
    PCNativeButton * _button;
    PCNativeStyle * _defaultStyle;
    NSArray * _elements;
    NSString * _headline;
    NSString * _localeIdentifier;
    NSString * _sponsor;
    NSURL * _sponsoredByAssetURL;
}

@property (nonatomic, retain) NSString *accessibleAdCopy;
@property (nonatomic, retain) NSString *accessibleHeadline;
@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, retain) NSString *adCopy;
@property (nonatomic) long long adFormatType;
@property (nonatomic) long long adType;
@property (nonatomic, retain) PCNativeButton *button;
@property (nonatomic, retain) PCNativeStyle *defaultStyle;
@property (nonatomic, retain) NSArray *elements;
@property (nonatomic, retain) NSString *headline;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, retain) NSString *sponsor;
@property (nonatomic, retain) NSURL *sponsoredByAssetURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibleAdCopy;
- (id)accessibleHeadline;
- (id)actionURL;
- (id)adCopy;
- (long long)adFormatType;
- (long long)adType;
- (id)button;
- (id)defaultStyle;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (id)headline;
- (id)initWithCoder:(id)arg1;
- (id)localeIdentifier;
- (void)setAccessibleAdCopy:(id)arg1;
- (void)setAccessibleHeadline:(id)arg1;
- (void)setActionURL:(id)arg1;
- (void)setAdCopy:(id)arg1;
- (void)setAdFormatType:(long long)arg1;
- (void)setAdType:(long long)arg1;
- (void)setButton:(id)arg1;
- (void)setDefaultStyle:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setSponsor:(id)arg1;
- (void)setSponsoredByAssetURL:(id)arg1;
- (id)sponsor;
- (id)sponsoredByAssetURL;

@end

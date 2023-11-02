
@interface ML3ArtworkColorAnalysis : NSObject <NSSecureCoding> {
    NSString * _backgroundColor;
    bool  _backgroundColorLight;
    NSString * _primaryTextColor;
    bool  _primaryTextColorLight;
    NSString * _secondaryTextColor;
    bool  _secondaryTextColorLight;
    NSString * _tertiaryTextColor;
    bool  _tertiaryTextColorLight;
}

@property (nonatomic, readonly) NSString *backgroundColor;
@property (getter=isBackgroundColorLight, nonatomic, readonly) bool backgroundColorLight;
@property (nonatomic, readonly) NSString *primaryTextColor;
@property (getter=isPrimaryTextColorLight, nonatomic, readonly) bool primaryTextColorLight;
@property (nonatomic, readonly) NSString *secondaryTextColor;
@property (getter=isSecondaryTextColorLight, nonatomic, readonly) bool secondaryTextColorLight;
@property (nonatomic, readonly) NSString *tertiaryTextColor;
@property (getter=isTertiaryTextColorLight, nonatomic, readonly) bool tertiaryTextColorLight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)dictRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorAnalysis:(id)arg1;
- (id)initWithColorAnalysisDictionary:(id)arg1;
- (bool)isBackgroundColorLight;
- (bool)isPrimaryTextColorLight;
- (bool)isSecondaryTextColorLight;
- (bool)isTertiaryTextColorLight;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (id)tertiaryTextColor;

@end

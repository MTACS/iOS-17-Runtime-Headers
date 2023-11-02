
@interface CKContextDonationItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contentAuthor;
    NSString * _contentDescription;
    NSString * _contentKeywords;
    NSString * _debugText;
    NSString * _debugUrlString;
    NSArray * _extractionItems;
    NSString * _languageTag;
    IOSurface * _leadImage;
    NSString * _rawHTML;
    IOSurface * _snapshot;
    NSString * _text;
    NSString * _title;
    NSArray * _uiElements;
}

@property (setter=setContentAuthor:, nonatomic, copy) NSString *contentAuthor;
@property (setter=setContentDescription:, nonatomic, copy) NSString *contentDescription;
@property (setter=setContentKeywords:, nonatomic, copy) NSString *contentKeywords;
@property (nonatomic, retain) NSString *debugText;
@property (nonatomic, retain) NSString *debugUrlString;
@property (nonatomic, retain) NSArray *extractionItems;
@property (nonatomic, copy) NSString *languageTag;
@property (setter=setLeadImage:, nonatomic, retain) IOSurface *leadImage;
@property (setter=setRawHTML:, nonatomic, copy) NSString *rawHTML;
@property (setter=setSnapshot:, nonatomic, retain) IOSurface *snapshot;
@property (setter=setText:, nonatomic, copy) NSString *text;
@property (setter=setTitle:, nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSArray *uiElements;

+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)trimTextToSize:(id)arg1;

- (void).cxx_destruct;
- (id)contentAuthor;
- (id)contentDescription;
- (id)contentKeywords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugText;
- (id)debugUrlString;
- (void)encodeWithCoder:(id)arg1;
- (id)extractionItems;
- (id)initWithCoder:(id)arg1;
- (id)languageTag;
- (id)leadImage;
- (id)rawHTML;
- (void)setContentAuthor:(id)arg1;
- (void)setContentDescription:(id)arg1;
- (void)setContentKeywords:(id)arg1;
- (void)setDebugText:(id)arg1;
- (void)setDebugUrlString:(id)arg1;
- (void)setExtractionItems:(id)arg1;
- (void)setLanguageTag:(id)arg1;
- (void)setLeadImage:(id)arg1;
- (void)setRawHTML:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUiElements:(id)arg1;
- (id)snapshot;
- (id)text;
- (id)title;
- (id)uiElements;

@end

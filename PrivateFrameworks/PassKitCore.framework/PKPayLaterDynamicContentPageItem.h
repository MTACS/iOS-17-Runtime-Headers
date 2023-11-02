
@interface PKPayLaterDynamicContentPageItem : NSObject {
    NSString * _altContentSubtitle;
    PKApplyFooterContent * _altFooterContent;
    NSString * _contentDetailLeading;
    NSString * _contentDetailSubtitleLeading;
    NSString * _contentDetailTrailing;
    NSString * _contentSubtitle;
    NSString * _contentTitle;
    NSString * _errorTitle;
    PKApplyFooterContent * _footerContent;
    NSString * _identifier;
    NSString * _linkText;
    NSURL * _linkURL;
    NSArray * _sections;
    NSArray * _systemImageColors;
    NSString * _systemImageName;
}

@property (nonatomic, copy) NSString *altContentSubtitle;
@property (nonatomic, retain) PKApplyFooterContent *altFooterContent;
@property (nonatomic, copy) NSString *contentDetailLeading;
@property (nonatomic, copy) NSString *contentDetailSubtitleLeading;
@property (nonatomic, copy) NSString *contentDetailTrailing;
@property (nonatomic, copy) NSString *contentSubtitle;
@property (nonatomic, copy) NSString *contentTitle;
@property (nonatomic, copy) NSString *errorTitle;
@property (nonatomic, retain) PKApplyFooterContent *footerContent;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *linkText;
@property (nonatomic, copy) NSURL *linkURL;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic, copy) NSArray *systemImageColors;
@property (nonatomic, copy) NSString *systemImageName;

- (void).cxx_destruct;
- (id)altContentSubtitle;
- (id)altFooterContent;
- (id)contentDetailLeading;
- (id)contentDetailSubtitleLeading;
- (id)contentDetailTrailing;
- (id)contentSubtitle;
- (id)contentTitle;
- (id)description;
- (id)errorTitle;
- (id)footerContent;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)linkText;
- (id)linkURL;
- (id)sections;
- (void)setAltContentSubtitle:(id)arg1;
- (void)setAltFooterContent:(id)arg1;
- (void)setContentDetailLeading:(id)arg1;
- (void)setContentDetailSubtitleLeading:(id)arg1;
- (void)setContentDetailTrailing:(id)arg1;
- (void)setContentSubtitle:(id)arg1;
- (void)setContentTitle:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)setFooterContent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLinkText:(id)arg1;
- (void)setLinkURL:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSystemImageColors:(id)arg1;
- (void)setSystemImageName:(id)arg1;
- (id)systemImageColors;
- (id)systemImageName;

@end

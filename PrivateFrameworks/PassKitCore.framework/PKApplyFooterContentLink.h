
@interface PKApplyFooterContentLink : NSObject <NSCopying> {
    NSString * _analyticsIdentifier;
    NSString * _linkText;
    NSURL * _linkURL;
    NSString * _termsIdentifier;
}

@property (nonatomic, copy) NSString *analyticsIdentifier;
@property (nonatomic, copy) NSString *linkText;
@property (nonatomic, copy) NSURL *linkURL;
@property (nonatomic, copy) NSString *termsIdentifier;

- (void).cxx_destruct;
- (id)analyticsIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)linkText;
- (id)linkURL;
- (void)setAnalyticsIdentifier:(id)arg1;
- (void)setLinkText:(id)arg1;
- (void)setLinkURL:(id)arg1;
- (void)setTermsIdentifier:(id)arg1;
- (id)termsIdentifier;

@end


@interface HKHRAFibBurdenFooter : NSObject {
    NSString * _footerLink;
    NSString * _footerText;
    NSString * _linkURL;
}

@property (nonatomic, retain) NSString *footerLink;
@property (nonatomic, retain) NSString *footerText;
@property (nonatomic, retain) NSString *linkURL;

- (void).cxx_destruct;
- (id)footerLink;
- (id)footerText;
- (id)initWithText:(id)arg1 link:(id)arg2 url:(id)arg3;
- (id)linkURL;
- (void)setFooterLink:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setLinkURL:(id)arg1;

@end

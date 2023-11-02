
@interface HKHRElectrocardiogramRecordingFooter : NSObject {
    NSString * _footerLink;
    NSString * _footerText;
    NSString * _linkURL;
}

@property (nonatomic, readonly) NSString *footerLink;
@property (nonatomic, readonly) NSString *footerText;
@property (nonatomic, readonly) NSString *linkURL;

- (void).cxx_destruct;
- (id)footerLink;
- (id)footerText;
- (id)initWithText:(id)arg1 link:(id)arg2 url:(id)arg3;
- (id)linkURL;

@end

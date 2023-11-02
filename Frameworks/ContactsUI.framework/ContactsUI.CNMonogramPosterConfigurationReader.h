
@interface ContactsUI.CNMonogramPosterConfigurationReader : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  monogramPosterConfiguration;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSString *initials;

+ (bool)canReadConfiguration;
+ (id)monogramPosterConfigurationDataFromUserInfo:(id)arg1;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)init;
- (id)initWithPosterConfigurationUserInfo:(id)arg1;
- (id)initials;

@end

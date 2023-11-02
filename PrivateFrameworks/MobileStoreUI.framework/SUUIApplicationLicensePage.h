
@interface SUUIApplicationLicensePage : NSObject <NSCopying> {
    NSString * _licenseAgreementHTML;
    NSString * _title;
}

@property (nonatomic, copy) NSString *licenseAgreementHTML;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)licenseAgreementHTML;
- (void)setLicenseAgreementHTML:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

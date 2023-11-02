
@interface PKPaymentPassDetailContactSupportSectionController : PKPaymentPassDetailSectionController {
    unsigned long long  _contactOption;
    <PKPaymentPassDetailContactSupportSectionControllerDelegate> * _delegate;
    NSString * _footerText;
    UIColor * _titleColor;
    NSString * _titleText;
}

@property (nonatomic) unsigned long long contactOption;
@property (nonatomic) <PKPaymentPassDetailContactSupportSectionControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *footerText;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) NSString *titleText;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (id)allSectionIdentifiers;
- (unsigned long long)contactOption;
- (id)delegate;
- (id)footerText;
- (id)initWithDelegate:(id)arg1;
- (id)sectionIdentifiers;
- (void)setContactOption:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)titleColor;
- (id)titleForFooterInSectionIdentifier:(id)arg1;
- (id)titleText;

@end

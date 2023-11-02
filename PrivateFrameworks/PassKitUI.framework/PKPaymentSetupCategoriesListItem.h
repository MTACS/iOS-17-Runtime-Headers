
@interface PKPaymentSetupCategoriesListItem : PKPaymentSetupListItem <NSCopying> {
    PKPaymentSetupProductCategory * _category;
    unsigned long long  _isLoadingIcon;
    NSString * _sectionIdentifier;
}

@property (nonatomic, retain) PKPaymentSetupProductCategory *category;
@property (nonatomic) unsigned long long isLoadingIcon;
@property (nonatomic, retain) NSString *sectionIdentifier;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)isLoadingIcon;
- (id)sectionIdentifier;
- (void)setCategory:(id)arg1;
- (void)setIsLoadingIcon:(unsigned long long)arg1;
- (void)setSectionIdentifier:(id)arg1;

@end

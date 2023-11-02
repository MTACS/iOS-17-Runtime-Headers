
@interface PKPaymentSetupProductsSectionListItem : PKPaymentSetupListItem <NSCopying> {
    unsigned long long  _isLoadingIcon;
    PKPaymentSetupProduct * _product;
    NSOrderedSet * _searchTerms;
    NSString * _sectionIdentifier;
}

@property (nonatomic) unsigned long long isLoadingIcon;
@property (nonatomic, retain) PKPaymentSetupProduct *product;
@property (nonatomic, copy) NSOrderedSet *searchTerms;
@property (nonatomic, retain) NSString *sectionIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)isLoadingIcon;
- (id)product;
- (id)searchTerms;
- (id)sectionIdentifier;
- (void)setIsLoadingIcon:(unsigned long long)arg1;
- (void)setProduct:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;

@end

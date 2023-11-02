
@interface ADSearchCriteria : NSObject <NSCopying> {
    NSString * _languageLocale;
    NSString * _searchTerm;
}

@property (nonatomic, copy) NSString *languageLocale;
@property (nonatomic, copy) NSString *searchTerm;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)languageLocale;
- (id)searchTerm;
- (void)setLanguageLocale:(id)arg1;
- (void)setSearchTerm:(id)arg1;

@end

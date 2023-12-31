
@interface DAContactsSearchQuery : DASearchQuery {
    bool  _calendarInitiated;
    bool  _includePhotos;
    NSString * _searchBase;
    NSString * _searchScope;
}

@property (nonatomic) bool calendarInitiated;
@property (nonatomic) bool includePhotos;
@property (nonatomic, copy) NSString *searchBase;
@property (nonatomic, copy) NSString *searchScope;

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

- (void).cxx_destruct;
- (bool)calendarInitiated;
- (id)dictionaryRepresentation;
- (bool)includePhotos;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;
- (id)searchBase;
- (id)searchScope;
- (void)setCalendarInitiated:(bool)arg1;
- (void)setIncludePhotos:(bool)arg1;
- (void)setSearchBase:(id)arg1;
- (void)setSearchScope:(id)arg1;

@end


@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask {
    id  _searchContext;
    NSSet * _searchStrings;
    NSSet * _searchTypes;
    CalDAVPrincipalSearchPropertySet * _serverSupportSet;
}

@property (nonatomic, retain) id searchContext;
@property (nonatomic, retain) NSSet *searchStrings;
@property (nonatomic, retain) NSSet *searchTypes;
@property (nonatomic, retain) CalDAVPrincipalSearchPropertySet *serverSupportSet;

- (void).cxx_destruct;
- (id)extraAttributes;
- (id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4;
- (id)searchContext;
- (id)searchItems;
- (id)searchStrings;
- (id)searchTypes;
- (id)serverSupportSet;
- (void)setSearchContext:(id)arg1;
- (void)setSearchStrings:(id)arg1;
- (void)setSearchTypes:(id)arg1;
- (void)setServerSupportSet:(id)arg1;

@end


@interface HSBrowseRequest : HSRequest

+ (id)requestWithDatabaseID:(unsigned int)arg1 browseGroupType:(long long)arg2;

- (id)_stringForBrowseGroupType:(long long)arg1;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 browseGroupType:(long long)arg2;

@end

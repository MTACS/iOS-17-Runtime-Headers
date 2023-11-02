
@interface PXSearchActiveSearch : NSObject {
    unsigned long long  _libraryScope;
    NSString * _priorityAssetUUID;
    NSArray * _representedObjects;
    NSString * _searchText;
    NSArray * _searchTokens;
}

@property (nonatomic, readonly) bool hasSearchText;
@property (nonatomic, readonly) bool hasSearchTokens;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) unsigned long long libraryScope;
@property (nonatomic, retain) NSString *priorityAssetUUID;
@property (nonatomic, retain) NSArray *representedObjects;
@property (nonatomic, readonly) unsigned long long searchTermCount;
@property (nonatomic, readonly) NSString *searchTermsString;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic, readonly) unsigned long long searchTokenCount;
@property (nonatomic, retain) NSArray *searchTokens;

- (void).cxx_destruct;
- (void)_generateRelatedSearchObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasSearchText;
- (bool)hasSearchTokens;
- (id)initWithSearchText:(id)arg1 searchTokens:(id)arg2 libraryScope:(unsigned long long)arg3;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (unsigned long long)libraryScope;
- (id)priorityAssetUUID;
- (id)representedObjects;
- (unsigned long long)searchTermCount;
- (id)searchTermsString;
- (id)searchText;
- (unsigned long long)searchTokenCount;
- (id)searchTokens;
- (void)setPriorityAssetUUID:(id)arg1;
- (void)setRepresentedObjects:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSearchTokens:(id)arg1;

@end

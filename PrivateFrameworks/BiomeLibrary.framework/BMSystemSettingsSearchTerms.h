
@interface BMSystemSettingsSearchTerms : BMEventBase <BMStoreData> {
    NSArray * _searchResultsClickedOn;
    NSString * _searchTerm;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *searchResultsClickedOn;
@property (nonatomic, readonly) NSString *searchTerm;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_searchResultsClickedOnJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSearchTerm:(id)arg1 searchResultsClickedOn:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)searchResultsClickedOn;
- (id)searchTerm;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end


@interface BMSystemSettingsSearchTermsSearchResultClickedOn : BMEventBase <BMStoreData> {
    NSString * _bundleIDwithAnchor;
    bool  _hasIndex;
    int  _index;
    NSString * _searchResultTitle;
}

@property (nonatomic, readonly) NSString *bundleIDwithAnchor;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int index;
@property (nonatomic, readonly) NSString *searchResultTitle;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)bundleIDwithAnchor;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIndex;
- (int)index;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBundleIDwithAnchor:(id)arg1 searchResultTitle:(id)arg2 index:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)searchResultTitle;
- (id)serialize;
- (void)setHasIndex:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

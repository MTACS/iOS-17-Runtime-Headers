
@interface PHAssetKeywordProperties : PHAssetPropertySet {
    NSSet * _keywordTitles;
}

@property (nonatomic, readonly, copy) NSSet *keywordTitles;

+ (bool)createsPropertySetObjectWithCustomImplementation;
+ (id)entityName;
+ (bool)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)keywordTitles;

@end

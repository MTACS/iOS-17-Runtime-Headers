
@interface PHAssetImportProperties : PHAssetPropertySet {
    long long  _importedBy;
}

@property (nonatomic, readonly) long long importedBy;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (long long)importedBy;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end

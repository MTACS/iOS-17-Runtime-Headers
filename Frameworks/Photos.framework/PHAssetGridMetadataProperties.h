
@interface PHAssetGridMetadataProperties : PHAssetPropertySet {
    NSString * _originalFilename;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *originalFilename;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)originalFilename;
- (id)title;

@end


@interface PHAssetAdjustmentProperties : PHAssetPropertySet {
    NSString * _formatIdentifier;
    NSString * _formatVersion;
    unsigned long long  _originalResourceChoice;
}

@property (nonatomic, readonly) NSString *formatIdentifier;
@property (nonatomic, readonly) NSString *formatVersion;
@property (nonatomic, readonly) unsigned long long originalResourceChoice;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)formatIdentifier;
- (id)formatVersion;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (unsigned long long)originalResourceChoice;

@end

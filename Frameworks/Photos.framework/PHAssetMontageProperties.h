
@interface PHAssetMontageProperties : PHAssetPropertySet {
    NSString * _montage;
}

@property (nonatomic, readonly, copy) NSString *montage;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)montage;

@end

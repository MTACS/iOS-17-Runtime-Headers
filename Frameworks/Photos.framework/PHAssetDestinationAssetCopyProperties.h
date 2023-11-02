
@interface PHAssetDestinationAssetCopyProperties : PHAssetPropertySet {
    long long  _destinationAssetCopyState;
}

@property (nonatomic, readonly) long long destinationAssetCopyState;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (long long)destinationAssetCopyState;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end

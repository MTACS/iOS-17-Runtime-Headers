
@interface PHAssetVisualSearchProperties : PHAssetPropertySet {
    NSDate * _adjustmentVersion;
    long long  _algorithmVersion;
    long long  _stickerAlgorithmVersion;
    float  _stickerConfidenceScore;
    NSData * _visualSearchData;
}

@property (nonatomic, readonly) NSDate *adjustmentVersion;
@property (nonatomic, readonly) long long algorithmVersion;
@property (nonatomic, readonly) long long stickerAlgorithmVersion;
@property (nonatomic, readonly) float stickerConfidenceScore;
@property (nonatomic, readonly) NSData *visualSearchData;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)adjustmentVersion;
- (long long)algorithmVersion;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (long long)stickerAlgorithmVersion;
- (float)stickerConfidenceScore;
- (id)visualSearchData;

@end

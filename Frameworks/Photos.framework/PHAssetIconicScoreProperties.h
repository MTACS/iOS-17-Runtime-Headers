
@interface PHAssetIconicScoreProperties : PHAssetPropertySet {
    double  _iconicScore;
}

@property (nonatomic, readonly) double iconicScore;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (double)iconicScore;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end

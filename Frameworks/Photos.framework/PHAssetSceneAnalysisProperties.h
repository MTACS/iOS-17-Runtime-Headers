
@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet {
    NSData * _distanceIdentity;
    NSDate * _sceneAnalysisTimestamp;
    short  _sceneAnalysisVersion;
}

@property (nonatomic, readonly) NSData *distanceIdentity;
@property (nonatomic, readonly) NSDate *sceneAnalysisTimestamp;
@property (nonatomic, readonly) short sceneAnalysisVersion;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)distanceIdentity;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)sceneAnalysisTimestamp;
- (short)sceneAnalysisVersion;

@end

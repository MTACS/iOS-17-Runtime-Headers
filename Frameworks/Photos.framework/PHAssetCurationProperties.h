
@interface PHAssetCurationProperties : PHAssetPropertySet {
    NSDate * _addedDate;
    float  _behavioralScore;
    NSArray * _cachedObjectSaliencyRects;
    NSString * _importedByBundleIdentifier;
    NSString * _importedByDisplayName;
    float  _interactionScore;
    float  _interestingSubjectScore;
    NSDate * _lastSharedDate;
    NSData * _objectSaliencyRectsData;
    float  _semanticScore;
    NSString * _syndicationIdentifier;
}

@property (nonatomic, readonly) NSDate *addedDate;
@property (nonatomic, readonly) float behavioralScore;
@property (nonatomic, readonly) NSString *importedByBundleIdentifier;
@property (nonatomic, readonly) NSString *importedByDisplayName;
@property (nonatomic, readonly) float interactionScore;
@property (nonatomic, readonly) float interestingSubjectScore;
@property (nonatomic, readonly) NSDate *lastSharedDate;
@property (nonatomic, readonly) NSArray *objectSaliencyRects;
@property (nonatomic, readonly) float semanticScore;
@property (nonatomic, readonly) NSString *syndicationIdentifier;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (float)_semanticScoreFromBehavioralScore:(double)arg1;
- (id)addedDate;
- (float)behavioralScore;
- (id)importedByBundleIdentifier;
- (id)importedByDisplayName;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (float)interactionScore;
- (float)interestingSubjectScore;
- (id)lastSharedDate;
- (id)objectSaliencyRects;
- (float)semanticScore;
- (id)syndicationIdentifier;

@end

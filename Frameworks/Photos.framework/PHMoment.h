
@interface PHMoment : PHAssetCollection <PLMomentProcessingProtocol> {
    float  _aggregationScore;
    double  _approximateLatitude;
    double  _approximateLongitude;
    double  _gpsHorizontalAccuracy;
    NSDate * _modificationDate;
    short  _originatorState;
    unsigned short  _processedLocation;
    NSDate * _representativeDate;
    unsigned short  _sharingComposition;
    NSString * _subtitle;
    int  _timeZoneOffset;
}

@property (nonatomic, readonly) float aggregationScore;
@property (nonatomic, readonly) double approximateLatitude;
@property (nonatomic, readonly) double approximateLongitude;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double gpsHorizontalAccuracy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) short originatorState;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } pl_coordinate;
@property (nonatomic, readonly) NSDate *pl_endDate;
@property (nonatomic, readonly) CLLocation *pl_location;
@property (nonatomic, readonly) unsigned short pl_locationType;
@property (nonatomic, readonly) unsigned long long pl_numberOfAssets;
@property (nonatomic, readonly) short pl_originatorState;
@property (nonatomic, readonly) NSDate *pl_startDate;
@property (nonatomic, readonly) NSString *pl_uuid;
@property (nonatomic, readonly) unsigned short processedLocation;
@property (nonatomic, readonly) NSDate *representativeDate;
@property (nonatomic, readonly) unsigned short sharingComposition;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int timeZoneOffset;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg1 photoLibrary:(id)arg2;
+ (id)entityKeyMap;
+ (id)fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2;
+ (id)fetchMomentUUIDByAssetUUIDForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchMomentUUIDsByPersonUUIDForPersonsWithUUIDs:(id)arg1 photoLibrary:(id)arg2;
+ (id)fetchMomentUUIDsByPhotosHighlightUUIDForPhotosHighlightUUIDs:(id)arg1 options:(id)arg2;
+ (id)fetchPredicateForSharingFilter:(unsigned short)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsSharingComposition;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (void)_cacheLocationWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (float)aggregationScore;
- (double)approximateLatitude;
- (double)approximateLongitude;
- (bool)canPerformEditOperation:(long long)arg1;
- (bool)canShowAvalancheStacks;
- (Class)changeRequestClass;
- (bool)collectionHasFixedOrder;
- (id)description;
- (double)gpsHorizontalAccuracy;
- (bool)hasLocationInfo;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)localEndDate;
- (id)localStartDate;
- (id)localizedLocationNames;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)modificationDate;
- (short)originatorState;
- (unsigned short)processedLocation;
- (id)representativeDate;
- (unsigned short)sharingComposition;
- (id)subtitle;
- (int)timeZoneOffset;
- (id)universalEndDate;
- (id)universalStartDate;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (struct CLLocationCoordinate2D { double x1; double x2; })pl_coordinate;
- (id)pl_endDate;
- (id)pl_location;
- (unsigned short)pl_locationType;
- (unsigned long long)pl_numberOfAssets;
- (short)pl_originatorState;
- (id)pl_startDate;
- (id)pl_uuid;

@end

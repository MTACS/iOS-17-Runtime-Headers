
@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding> {
    struct shared_ptr<FeatureStyleAttributes> { 
        struct FeatureStyleAttributes {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _attributes;
}

@property (nonatomic, readonly) int bikeLaneSide;
@property (nonatomic, readonly) int bikeableSide;
@property (nonatomic, readonly) unsigned char countAttrs;
@property (nonatomic, readonly) unsigned char countExtAttrs;
@property (nonatomic, readonly) int drivingSide;
@property (nonatomic, readonly) struct GeoCodecsFeatureStylePairExt { unsigned int x1; unsigned long long x2; }*extAttrs;
@property (nonatomic, readonly) BOOL featureType;
@property (nonatomic, readonly) bool hasDrivingSide;
@property (nonatomic, readonly) bool isBorder;
@property (nonatomic, readonly) bool isBridge;
@property (nonatomic, readonly) bool isDrivable;
@property (nonatomic, readonly) bool isFreeway;
@property (nonatomic, readonly) bool isRailway;
@property (nonatomic, readonly) bool isRamp;
@property (nonatomic, readonly) bool isRoadPedestrianNavigable;
@property (nonatomic, readonly) bool isTunnel;
@property (nonatomic, readonly) bool isWalkable;
@property (nonatomic, readonly) unsigned int lineType;
@property (nonatomic, readonly) NSString *poiCategory;
@property (nonatomic, readonly) unsigned char rampDirection;
@property (nonatomic, readonly) int rampType;
@property (nonatomic, readonly) bool shouldSuppress3DBuildingStrokes;
@property (nonatomic, readonly) int sidewalkSide;
@property (nonatomic, readonly) struct GeoCodecsFeatureStylePair { unsigned int x1; int x2; }*v;
@property (nonatomic, readonly) int walkableSide;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)RAPLocationStyleAttributes;
+ (id)addressMarkerStyleAttributes;
+ (id)airportStyleAttributes;
+ (id)calendarEventStyleAttributes;
+ (id)carRentalStyleAttributes;
+ (id)evChargerStyleAttributes;
+ (id)frequentLocationStyleAttributes;
+ (id)gasStationStyleAttributes;
+ (id)homeStyleAttributes;
+ (id)homeWithHalo;
+ (id)hotelStyleAttributes;
+ (id)inviteStyleAttributes;
+ (id)markerWithHalo;
+ (id)nearbyTransitStyleAttributes;
+ (id)parkedCarStyleAttributes;
+ (id)restaurantStyleAttributes;
+ (id)schoolStyleAttributes;
+ (id)schoolWithHalo;
+ (id)searchResultStyleAttributes;
+ (id)sharedLocationStyleAttributes;
+ (id)sharedLocationWithHalo;
+ (id)styleAttributesForPlace:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)ticketedEventStyleAttributes;
+ (id)transitStationStyleAttributes;
+ (id)workStyleAttributes;
+ (id)workWithHalo;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithSharedStyleAttributes:(const void*)arg1 extAttributes:(const struct GeoCodecsFeatureStylePairExt { unsigned int x1; unsigned long long x2; }*)arg2 extAttributeCount:(unsigned char)arg3;
- (struct shared_ptr<const FeatureStyleAttributes> { struct FeatureStyleAttributes {} *x1; struct __shared_weak_count {} *x2; })_sharedAttributes;
- (int)bikeLaneSide;
- (int)bikeableSide;
- (id)copyWithAirportStyleAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)countAttrs;
- (unsigned char)countExtAttrs;
- (id)description;
- (id)dictionaryRepresentation;
- (int)drivingSide;
- (void)encodeWithCoder:(id)arg1;
- (struct GeoCodecsFeatureStylePairExt { unsigned int x1; unsigned long long x2; }*)extAttrs;
- (void*)featureStyleAttributes;
- (struct shared_ptr<FeatureStyleAttributes> { struct FeatureStyleAttributes {} *x1; struct __shared_weak_count {} *x2; })featureStyleAttributesPtr;
- (BOOL)featureType;
- (bool)hasAttributes;
- (bool)hasDrivingSide;
- (id)init;
- (id)initWithAttributes:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureStyleAttributesPtr:(const void*)arg1;
- (id)initWithGEOStyleAttributes:(id)arg1;
- (id)initWithPlaceDataStyleAttributes:(id)arg1;
- (id)initWithPlaceStyleAttributes:(id)arg1;
- (id)initWithStyleAttributes:(const void*)arg1;
- (bool)isBorder;
- (bool)isBridge;
- (bool)isDrivable;
- (bool)isEqual:(id)arg1;
- (bool)isFreeway;
- (bool)isLabelPOI;
- (bool)isLandmarkPOI;
- (bool)isRailway;
- (bool)isRamp;
- (bool)isRoadPedestrianNavigable;
- (bool)isSearchResult;
- (bool)isSystemTransit;
- (bool)isTransit;
- (bool)isTunnel;
- (bool)isWalkable;
- (unsigned int)lineType;
- (id)poiCategory;
- (int)poiType;
- (unsigned char)rampDirection;
- (int)rampType;
- (void)replaceAttributes:(const struct GeoCodecsFeatureStylePair { unsigned int x1; int x2; }*)arg1 count:(unsigned int)arg2;
- (void)setExtAttributes:(const struct GeoCodecsFeatureStylePairExt { unsigned int x1; unsigned long long x2; }*)arg1 count:(unsigned int)arg2;
- (bool)shouldSuppress3DBuildingStrokes;
- (int)sidewalkSide;
- (void)sort;
- (struct GeoCodecsFeatureStylePair { unsigned int x1; int x2; }*)v;
- (int)walkableSide;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)annotationViewProvidedCustomFeatureStyleAttributes;
+ (id)genericMarkerStyleAttributes;
+ (id)genericServiceStyleAttributes;
+ (id)markerStyleAttributes;
+ (id)styleAttributesForCalloutWithAttributes:(id)arg1;
+ (id)styleAttributesForDraggingWithAttributes:(id)arg1;
+ (id)styleAttributesForMapFeatureAttributes:(id)arg1 elevatedGround:(bool)arg2;
+ (id)styleAttributesForRouteAnnotationWithAttributes:(id)arg1;
+ (id)styleAttributesForSearchResultWithAttributes:(id)arg1;
+ (id)styleAttributesForTrafficCameraType:(long long)arg1 isAboveThreshold:(bool)arg2;
+ (id)styleAttributesForTrafficIncidentType:(long long)arg1;
+ (id)styleAttributesForTransitType:(long long)arg1;
+ (id)styleAttributesForUnpickedFeatureWithAttributes:(id)arg1;
+ (id)trainStationStyleAttributes;

- (id)styleAttributesWithElevatedGround:(bool)arg1;

@end

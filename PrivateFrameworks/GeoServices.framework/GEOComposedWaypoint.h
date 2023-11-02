
@interface GEOComposedWaypoint : PBCodable <NSCopying> {
    NSString * _findMyHandleID;
    struct { 
        unsigned int has_type : 1; 
        unsigned int has_isCurrentLocation : 1; 
        unsigned int has_isOutsideOfflineDownloadedRegion : 1; 
        unsigned int read_findMyHandleID : 1; 
        unsigned int read_latLng : 1; 
        unsigned int read_location : 1; 
        unsigned int read_mapItemStorage : 1; 
        unsigned int read_styleAttributesData : 1; 
        unsigned int read_uniqueWaypointID : 1; 
        unsigned int read_waypoint : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isCurrentLocation;
    bool  _isOutsideOfflineDownloadedRegion;
    GEOLatLng * _latLng;
    GEOLocation * _location;
    GEOMapItemStorage * _mapItemStorage;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _styleAttributesData;
    int  _type;
    NSData * _uniqueWaypointID;
    GEOWaypointTyped * _waypoint;
}

@property (nonatomic, retain) NSString *findMyHandleID;
@property (nonatomic, readonly) GEOWaypointTyped *geoWaypointTyped;
@property (nonatomic, readonly) bool hasFindMyHandleID;
@property (nonatomic) bool hasIsCurrentLocation;
@property (nonatomic) bool hasIsOutsideOfflineDownloadedRegion;
@property (nonatomic, readonly) bool hasLatLng;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasMapItemStorage;
@property (nonatomic, readonly) bool hasStyleAttributesData;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUniqueWaypointID;
@property (nonatomic, readonly) bool hasWaypoint;
@property (nonatomic) bool isCurrentLocation;
@property (nonatomic) bool isOutsideOfflineDownloadedRegion;
@property (nonatomic, retain) GEOLatLng *latLng;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSData *styleAttributesData;
@property (nonatomic) int type;
@property (nonatomic, retain) NSData *uniqueWaypointID;
@property (nonatomic, retain) GEOWaypointTyped *waypoint;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(id /* block */)arg4;
+ (id)composedWaypointForID:(unsigned long long)arg1 resultsProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(id /* block */)arg6 networkActivityHandler:(id /* block */)arg7;
+ (id)composedWaypointForIdentifier:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(id /* block */)arg4;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 clientResolvedCompletionHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6 networkActivityHandler:(id /* block */)arg7;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(struct { double x1; double x2; })arg2 isCurrentLocation:(bool)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(id /* block */)arg6 networkActivityHandler:(id /* block */)arg7;
+ (id)composedWaypointForWaypointTyped:(id)arg1 completionHandler:(id /* block */)arg2 networkActivityHandler:(id /* block */)arg3;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)_addressCandidatesForComparison;
- (id)_locationCandidatesForComparison;
- (id)_muidCandidatesForComparison;
- (id)_regionCandidatesForContainment;
- (id)artwork;
- (id)bestLatLng;
- (id)chargingInfo;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (id)convertToStaticLocation;
- (struct { double x1; double x2; double x3; })coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)findMyHandleID;
- (id)geoMapItem;
- (id)geoWaypointTyped;
- (bool)hasFindMyHandleID;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsCurrentLocation;
- (bool)hasIsOutsideOfflineDownloadedRegion;
- (bool)hasLatLng;
- (bool)hasLocation;
- (bool)hasMapItemStorage;
- (bool)hasStyleAttributesData;
- (bool)hasType;
- (bool)hasUniqueWaypointID;
- (bool)hasWaypoint;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCompanionWaypoint:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithLocation:(id)arg1 findMyHandleID:(id)arg2;
- (id)initWithLocation:(id)arg1 isCurrentLocation:(bool)arg2;
- (id)initWithMapItem:(id)arg1;
- (bool)isCurrentLocation;
- (bool)isEqual:(id)arg1;
- (bool)isLocationWaypointType;
- (bool)isOutsideOfflineDownloadedRegion;
- (bool)isSameAs:(id)arg1;
- (bool)isSameAs:(id)arg1 comparisonCriteria:(unsigned long long)arg2;
- (bool)isServerProvidedWaypoint;
- (id)jsonRepresentation;
- (id)latLng;
- (id)location;
- (id)mapItemStorage;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)name;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)recomputeGeoWaypointTyped;
- (void)setFindMyHandleID:(id)arg1;
- (void)setHasIsCurrentLocation:(bool)arg1;
- (void)setHasIsOutsideOfflineDownloadedRegion:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsCurrentLocation:(bool)arg1;
- (void)setIsOutsideOfflineDownloadedRegion:(bool)arg1;
- (void)setLatLng:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setStyleAttributesData:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUniqueWaypointID:(id)arg1;
- (void)setWaypoint:(id)arg1;
- (id)styleAttributes;
- (id)styleAttributesData;
- (id)timezone;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)uniqueID;
- (id)uniqueWaypointID;
- (id)waypoint;
- (int)waypointCategory;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (void)composedWaypointForMapItem:(id)arg1 useAsLocation:(bool)arg2 forQuickETA:(bool)arg3 traits:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)appleParkWaypointFromAddress;
+ (id)appleParkWaypointFromLatLng;
+ (id)appleParkWaypointFromMuid;

- (id)bestDisplayName:(bool)arg1;
- (id)bestSpokenName;
- (id)directionsListAddress;
- (id)humanDescription;
- (id)humanDescriptionWithAddressAndLatLng;
- (id)humanDescriptionWithLatLng;
- (id)localeIdentifier;
- (id)navAnnouncementAddress;
- (id)navAnnouncementAddressAndSubstituteType:(int*)arg1;
- (id)navAnnouncementName;
- (id)navAnnouncementNameAndSubstituteType:(int*)arg1;
- (id)navDisplayAddress;
- (id)navDisplayAddressAndSubstituteType:(int*)arg1;
- (id)navDisplayName;
- (id)navDisplayNameAndSubstituteType:(int*)arg1;
- (id)navDisplayNameWithSpecialContacts:(bool)arg1;
- (id)navDisplayNameWithSpecialContacts:(bool)arg1 substituteType:(int*)arg2;

@end

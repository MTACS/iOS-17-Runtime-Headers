
@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {
    GEOURLCamera * _camera;
    GEOURLCenterSpan * _centerSpan;
    bool  _connectedToCar;
    bool  _enableTraffic;
    struct { 
        unsigned int has_mapType : 1; 
        unsigned int has_transportType : 1; 
        unsigned int has_userTrackingMode : 1; 
        unsigned int has_connectedToCar : 1; 
        unsigned int has_enableTraffic : 1; 
        unsigned int has_ignoreLabelPreference : 1; 
        unsigned int has_pitchedWhileTracking : 1; 
        unsigned int read_camera : 1; 
        unsigned int read_centerSpan : 1; 
        unsigned int read_referralIdentifier : 1; 
        unsigned int read_routeHandle : 1; 
        unsigned int read_timePoint : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _ignoreLabelPreference;
    int  _mapType;
    bool  _pitchedWhileTracking;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _referralIdentifier;
    GEOURLRouteHandle * _routeHandle;
    GEOURLTimePoint * _timePoint;
    int  _transportType;
    int  _userTrackingMode;
}

@property (nonatomic, retain) GEOURLCamera *camera;
@property (nonatomic, retain) GEOURLCenterSpan *centerSpan;
@property (nonatomic) bool connectedToCar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableTraffic;
@property (nonatomic, readonly) bool hasCamera;
@property (nonatomic, readonly) bool hasCenterSpan;
@property (nonatomic) bool hasConnectedToCar;
@property (nonatomic) bool hasEnableTraffic;
@property (nonatomic) bool hasIgnoreLabelPreference;
@property (nonatomic) bool hasMapType;
@property (nonatomic) bool hasPitchedWhileTracking;
@property (nonatomic, readonly) bool hasReferralIdentifier;
@property (nonatomic, readonly) bool hasRouteHandle;
@property (nonatomic, readonly) bool hasTimePoint;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasUserTrackingMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreLabelPreference;
@property (nonatomic) int mapType;
@property (nonatomic) bool pitchedWhileTracking;
@property (nonatomic, retain) NSString *referralIdentifier;
@property (nonatomic, retain) GEOURLRouteHandle *routeHandle;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOURLTimePoint *timePoint;
@property (nonatomic) int transportType;
@property (nonatomic) int userTrackingMode;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsMapType:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (int)StringAsUserTrackingMode:(id)arg1;
- (id)camera;
- (id)centerSpan;
- (bool)connectedToCar;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableTraffic;
- (bool)hasCamera;
- (bool)hasCenterSpan;
- (bool)hasConnectedToCar;
- (bool)hasEnableTraffic;
- (bool)hasIgnoreLabelPreference;
- (bool)hasMapType;
- (bool)hasPitchedWhileTracking;
- (bool)hasReferralIdentifier;
- (bool)hasRouteHandle;
- (bool)hasTimePoint;
- (bool)hasTransportType;
- (bool)hasUserTrackingMode;
- (unsigned long long)hash;
- (bool)ignoreLabelPreference;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pitchedWhileTracking;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)referralIdentifier;
- (id)routeHandle;
- (void)setCamera:(id)arg1;
- (void)setCenterSpan:(id)arg1;
- (void)setConnectedToCar:(bool)arg1;
- (void)setEnableTraffic:(bool)arg1;
- (void)setHasConnectedToCar:(bool)arg1;
- (void)setHasEnableTraffic:(bool)arg1;
- (void)setHasIgnoreLabelPreference:(bool)arg1;
- (void)setHasMapType:(bool)arg1;
- (void)setHasPitchedWhileTracking:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasUserTrackingMode:(bool)arg1;
- (void)setIgnoreLabelPreference:(bool)arg1;
- (void)setMapType:(int)arg1;
- (void)setPitchedWhileTracking:(bool)arg1;
- (void)setReferralIdentifier:(id)arg1;
- (void)setRouteHandle:(id)arg1;
- (void)setTimePoint:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setUserTrackingMode:(int)arg1;
- (id)timePoint;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)urlRepresentation;
- (int)userTrackingMode;
- (id)userTrackingModeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)initWithLaunchOptions:(id)arg1;
- (id)launchOptions;

@end

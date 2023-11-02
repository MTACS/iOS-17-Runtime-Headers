
@interface CLLocation : NSObject <CKRecordValue, HMBModelObjectStorage, HMFObject, INJSONSerializable, NSCopying, NSSecureCoding> {
    id  _internal;
}

@property (nonatomic, readonly) _CLLocationFusionInfo *_fusionInfo;
@property (nonatomic, readonly) _CLLocationGroundAltitude *_groundAltitude;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double altitudeWgs84;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; } clientLocation;
@property (nonatomic, readonly) NSData *coarseMetaData;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (getter=isCoordinateFused, nonatomic, readonly) bool coordinateFused;
@property (getter=isCoordinateFusedWithVL, nonatomic, readonly) bool coordinateFusedWithVL;
@property (nonatomic, readonly) double course;
@property (nonatomic, readonly) double courseAccuracy;
@property (nonatomic, readonly) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_navigation_detailedMatchInfo, nonatomic, readonly) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic, readonly) double ellipsoidalAltitude;
@property (nonatomic, readonly, copy) CLFloor *floor;
@property (nonatomic, readonly) CLLocationGnssOdometerInfo *gnssOdometerInfo;
@property (getter=_navigation_gtLog, setter=_navigation_setGtLog:, nonatomic) bool gtLog;
@property (getter=_navigation_hasMatch, nonatomic, readonly) bool hasMatch;
@property (getter=_navigation_hasValidCourse, nonatomic, readonly) bool hasValidCourse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, readonly) unsigned int integrity;
@property (nonatomic, readonly) bool isAltitudeWgs84Available;
@property (getter=_navigation_isStale, nonatomic, readonly) bool isStale;
@property (nonatomic, readonly) NSString *iso6709Notation;
@property (getter=_navigation_locationDescription, nonatomic, readonly) NSString *locationDescription;
@property (nonatomic, readonly) double magneticDeclination;
@property (nonatomic, readonly) CLLocationMatchInfo *matchInfo;
@property (nonatomic, readonly) int positionContextState;
@property (readonly, copy) NSString *privateDescription;
@property (nonatomic, readonly) double probabilityPositionContextStateIndoor;
@property (nonatomic, readonly) double probabilityPositionContextStateOutdoor;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) double rawAltitude;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } rawCoordinate;
@property (nonatomic, readonly) double rawCourse;
@property (nonatomic, readonly) double rawCourseAccuracy;
@property (nonatomic, readonly) double rawHorizontalAccuracy;
@property (getter=_navigation_rawShiftedCoordinate, nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } rawShiftedCoordinate;
@property (nonatomic, readonly) double rawVerticalAccuracy;
@property (nonatomic) int referenceFrame;
@property (getter=_navigation_routeMatch, nonatomic, readonly) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) bool shiftedReferenceFrame;
@property (readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly) int signalEnvironmentType;
@property (nonatomic, readonly) CLLocationSourceInformation *sourceInformation;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double speedAccuracy;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) CLLocationTrackRunInfo *trackRunInfo;
@property (nonatomic, readonly) double trustedTimestamp;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) double verticalAccuracy;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (bool)supportsSecureCoding;

- (id)_fusionInfo;
- (id)_groundAltitude;
- (id)_initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 timestamp:(id)arg9 floor:(int)arg10 type:(int)arg11 sourceParams:(id)arg12 referenceFrame:(int)arg13;
- (id)_initWithRTLocation:(id)arg1;
- (double)altitude;
- (double)altitudeWgs84;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })clientLocation;
- (id)coarseMetaData;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (double)courseAccuracy;
- (void)dealloc;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (double)ellipsoidalAltitude;
- (void)encodeWithCoder:(id)arg1;
- (id)floor;
- (double)getDistanceFrom:(id)arg1;
- (id)gnssOdometerInfo;
- (double)horizontalAccuracy;
- (id)init;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 clientLocationPrivate:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; int x_16_1_5; double x_16_1_6; long long x_16_1_7; double x_16_1_8; double x_16_1_9; double x_16_1_10; } x16; struct { struct { int x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; struct { double x_7_3_1; double x_7_3_2; } x_1_2_7; double x_1_2_8; double x_1_2_9; } x_17_1_1; int x_17_1_2; unsigned long long x_17_1_3; int x_17_1_4; int x_17_1_5; int x_17_1_6; int x_17_1_7; double x_17_1_8; bool x_17_1_9; } x17; struct { double x_18_1_1; double x_18_1_2; } x18; int x19; float x20; struct { double x_21_1_1; double x_21_1_2; } x21; double x22; double x23; int x24; bool x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; bool x34; bool x35; struct { double x_36_1_1; double x_36_1_2; } x36; })arg2;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 clientLocationPrivate:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; int x_16_1_5; double x_16_1_6; long long x_16_1_7; double x_16_1_8; double x_16_1_9; double x_16_1_10; } x16; struct { struct { int x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; struct { double x_7_3_1; double x_7_3_2; } x_1_2_7; double x_1_2_8; double x_1_2_9; } x_17_1_1; int x_17_1_2; unsigned long long x_17_1_3; int x_17_1_4; int x_17_1_5; int x_17_1_6; int x_17_1_7; double x_17_1_8; bool x_17_1_9; } x17; struct { double x_18_1_1; double x_18_1_2; } x18; int x19; float x20; struct { double x_21_1_1; double x_21_1_2; } x21; double x22; double x23; int x24; bool x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; bool x34; bool x35; struct { double x_36_1_1; double x_36_1_2; } x36; })arg2 coarseMetaData:(id)arg3;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 coarseMetaData:(id)arg2;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 matchInfo:(id)arg2;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 trackRunInfo:(id)arg6 rawHorizontalAccuracy:(double)arg7 rawAltitude:(double)arg8 rawVerticalAccuracy:(double)arg9 rawCourseAccuracy:(double)arg10 positionContextStateType:(int)arg11 probabilityPositionContextStateIndoor:(double)arg12 probabilityPositionContextStateOutdoor:(double)arg13 gnssOdometerInfo:(id)arg14 coarseMetaData:(id)arg15;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; })arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 trackRunInfo:(id)arg6 rawHorizontalAccuracy:(double)arg7 rawCourseAccuracy:(double)arg8 coarseMetaData:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 timestamp:(id)arg9;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 timestamp:(id)arg9 sourceInfo:(id)arg10;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5 referenceFrame:(int)arg6;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 speed:(double)arg4 course:(double)arg5 horizontalAccuracy:(double)arg6 verticalAccuracy:(double)arg7 speedAccuracy:(double)arg8 courseAccuracy:(double)arg9 type:(int)arg10 timestamp:(id)arg11;
- (unsigned int)integrity;
- (bool)isAltitudeWgs84Available;
- (bool)isCoordinateFused;
- (bool)isCoordinateFusedWithVL;
- (id)iso6709Notation;
- (id)jsonObject;
- (double)magneticDeclination;
- (id)matchInfo;
- (int)positionContextState;
- (double)probabilityPositionContextStateIndoor;
- (double)probabilityPositionContextStateOutdoor;
- (id)propagateLocationToTime:(double)arg1;
- (double)rawAltitude;
- (struct CLLocationCoordinate2D { double x1; double x2; })rawCoordinate;
- (double)rawCourse;
- (double)rawCourseAccuracy;
- (double)rawHorizontalAccuracy;
- (double)rawVerticalAccuracy;
- (int)referenceFrame;
- (void)setReferenceFrame:(int)arg1;
- (id)shortDescription;
- (int)signalEnvironmentType;
- (id)snapToResolution:(double)arg1;
- (id)sourceInformation;
- (double)speed;
- (double)speedAccuracy;
- (id)timestamp;
- (id)trackRunInfo;
- (double)trustedTimestamp;
- (int)type;
- (void)unmatch;
- (double)verticalAccuracy;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKDPLocationCoordinateFromCLLocation:(id)arg1;
+ (id)CKLocationFromPLocationCoordinate:(id)arg1;

- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (double)_mapkit_timeToExpire;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

- (unsigned int)atx_locationHash;
- (unsigned long long)atx_locationHashWithLevel:(int)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionFoundation.framework/AppPredictionFoundation

- (bool)atx_isFuzzyMatch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)cam_videoMetadataRepresentation;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (unsigned long long)cplSpecialHash;
- (bool)cplSpecialIsEqual:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;

- (id)schema;

// Image: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore

- (long long)hash;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;

- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)shortDescription;

- (id)attributeDescriptions;
- (id)description;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)shortDescription;

- (id)attributeDescriptions;
- (id)description;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor

- (unsigned long long)cd_locationHashWithLevel:(int)arg1;
- (unsigned long long)cd_privacyPreservingLocationHashWithLevel:(int)arg1;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

- (id)timeZone;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (bool)_navigation_isLocation:(id)arg1 equalTo:(id)arg2;
+ (id)_navigation_stringWithType:(int)arg1;

- (id)_navigation_detailedMatchInfo;
- (struct { double x1; double x2; })_navigation_geoCoordinate;
- (struct { double x1; double x2; double x3; })_navigation_geoCoordinate3D;
- (id)_navigation_geoLocation;
- (bool)_navigation_gtLog;
- (bool)_navigation_hasMatch;
- (bool)_navigation_hasValidCourse;
- (bool)_navigation_isEqualToLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (bool)_navigation_isStale;
- (id)_navigation_locationDescription;
- (struct CLLocationCoordinate2D { double x1; double x2; })_navigation_rawShiftedCoordinate;
- (id)_navigation_routeMatch;
- (void)_navigation_setGtLog:(bool)arg1;
- (double)_navigation_speedAccuracy;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 rawCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 referenceFrame:(int)arg13;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 rawCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 referenceFrame:(int)arg13 serializedCoarseMetaData:(id)arg14;
- (id)initWithGeoLocation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (int)pl_locationHash;
- (id)pl_newSurroundingLocationsHashes;

// Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds

- (id)snappedToGrid:(double)arg1;

// Image: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights

- (struct CLLocationCoordinate2D { double x1; double x2; })sh_geoHashToCoordinates:(id)arg1;
- (id)sh_geohashOfLength:(unsigned long long)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })sh_roundCoordinateValuesToGeohashOfLength:(unsigned long long)arg1;
- (id)sh_toGeohash;

// Image: /System/Library/PrivateFrameworks/WeatherCore.framework/WeatherCore

- (id)debugDescription;

// Image: /System/Library/PrivateFrameworks/WeatherDaemon.framework/WeatherDaemon

- (bool)shiftedReferenceFrame;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

- (bool)wf_isEquivalentToLocation:(id)arg1 tolerance:(double)arg2;

@end

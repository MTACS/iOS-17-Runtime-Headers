
@interface CLRegion : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _center;
    bool  _conservativeEntry;
    NSUUID * _deviceId;
    bool  _emergency;
    NSString * _handoffTag;
    NSString * _identifier;
    bool  _notifyOnEntry;
    bool  _notifyOnExit;
    NSString * _onBehalfOfBundleId;
    double  _radius;
    int  _referenceFrame;
    int  _type;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } center;
@property bool conservativeEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSUUID *deviceId;
@property bool emergency;
@property (nonatomic, readonly, copy) NSString *handoffTag;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hm_description;
@property (nonatomic, readonly, copy) NSString *identifier;
@property bool notifyOnEntry;
@property bool notifyOnExit;
@property (nonatomic, copy) NSString *onBehalfOfBundleId;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) double radius;
@property int referenceFrame;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property int type;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (bool)supportsSecureCoding;

- (struct CLLocationCoordinate2D { double x1; double x2; })center;
- (bool)conservativeEntry;
- (bool)containsCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceId;
- (bool)emergency;
- (void)encodeWithCoder:(id)arg1;
- (id)handoffTag;
- (unsigned long long)hash;
- (id)identifier;
- (id)initCircularRegionWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithClientRegion:(struct { BOOL x1[512]; BOOL x2[512]; BOOL x3[512]; int x4; bool x5; bool x6; bool x7; bool x8; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; bool x_1_2_5; } x_9_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; int x_2_2_4; bool x_2_2_5; bool x_2_2_6; } x_9_1_2; struct { struct { double x_1_3_1; double x_1_3_2; } x_3_2_1[101]; int x_3_2_2; int x_3_2_3; bool x_3_2_4; } x_9_1_3; } x9; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 andRegionType:(int)arg2;
- (id)initWithIdentifier:(id)arg1 onBehalfOf:(id)arg2 regionType:(int)arg3 notifyOnEntry:(bool)arg4 notifyOnExit:(bool)arg5 conservativeEntry:(bool)arg6 emergency:(bool)arg7;
- (id)initWithIdentifier:(id)arg1 onBehalfOf:(id)arg2 regionType:(int)arg3 notifyOnEntry:(bool)arg4 notifyOnExit:(bool)arg5 conservativeEntry:(bool)arg6 emergency:(bool)arg7 deviceId:(id)arg8 handoffTag:(id)arg9;
- (bool)isEqual:(id)arg1;
- (bool)notifyOnEntry;
- (bool)notifyOnExit;
- (id)onBehalfOfBundleId;
- (double)radius;
- (int)referenceFrame;
- (void)setConservativeEntry:(bool)arg1;
- (void)setEmergency:(bool)arg1;
- (void)setNotifyOnEntry:(bool)arg1;
- (void)setNotifyOnExit:(bool)arg1;
- (void)setOnBehalfOfBundleId:(id)arg1;
- (void)setReferenceFrame:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_description;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)shortDescription;

- (id)description;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)shortDescription;

- (id)description;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)regionWithLocations:(id)arg1 andIdentifier:(id)arg2;

@end

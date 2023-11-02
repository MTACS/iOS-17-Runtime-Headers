
@interface REMStructuredLocation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _address;
    NSString * _contactLabel;
    double  _latitude;
    NSString * _locationUID;
    double  _longitude;
    NSData * _mapKitHandle;
    double  _radius;
    NSString * _referenceFrameString;
    NSString * _routing;
    NSString * _title;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *contactLabel;
@property (nonatomic) double latitude;
@property (nonatomic, readonly) NSString *locationUID;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSData *mapKitHandle;
@property (nonatomic) double radius;
@property (nonatomic, copy) NSString *referenceFrameString;
@property (nonatomic, copy) NSString *routing;
@property (nonatomic, copy) NSString *title;

+ (double)minimumRegionMonitoringDistance;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)contactLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 locationUID:(id)arg2;
- (id)initWithTitle:(id)arg1 locationUID:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radius:(double)arg5 address:(id)arg6 routing:(id)arg7 referenceFrameString:(id)arg8 contactLabel:(id)arg9 mapKitHandle:(id)arg10;
- (bool)isContentEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (id)locationUID;
- (double)longitude;
- (id)mapKitHandle;
- (double)radius;
- (id)referenceFrameString;
- (id)routing;
- (void)setAddress:(id)arg1;
- (void)setContactLabel:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMapKitHandle:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setReferenceFrameString:(id)arg1;
- (void)setRouting:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end


@interface _CLPlaceInference : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * __loiIdentifier;
    double  _confidence;
    unsigned long long  _placeType;
    CLPlacemark * _placemark;
    NSString * _preferredName;
    CLLocation * _referenceLocation;
    unsigned long long  _userType;
}

@property (nonatomic, readonly) NSUUID *_loiIdentifier;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned long long placeType;
@property (nonatomic, readonly) CLPlacemark *placemark;
@property (nonatomic, readonly) NSString *preferredName;
@property (nonatomic, readonly) CLLocation *referenceLocation;
@property (nonatomic, readonly) unsigned long long userType;

+ (unsigned long long)_placeInferencePlaceTypeFromRTPlaceType:(unsigned long long)arg1;
+ (unsigned long long)_userSpecificPlaceTypeFromRTUserType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (id)_initWithRTPlaceInference:(id)arg1;
- (id)_loiIdentifier;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserType:(unsigned long long)arg1 placeType:(unsigned long long)arg2 placemark:(id)arg3 referenceLocation:(id)arg4 confidence:(double)arg5 preferredName:(id)arg6 loiIdentifier:(id)arg7;
- (unsigned long long)placeType;
- (id)placemark;
- (id)preferredName;
- (id)referenceLocation;
- (unsigned long long)userType;

@end

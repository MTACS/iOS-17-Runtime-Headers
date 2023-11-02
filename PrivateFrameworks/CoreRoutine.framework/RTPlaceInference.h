
@interface RTPlaceInference : NSObject <NSSecureCoding> {
    double  _confidence;
    NSUUID * _loiIdentifier;
    RTMapItem * _mapItem;
    unsigned long long  _placeType;
    NSString * _preferredName;
    RTLocation * _referenceLocation;
    unsigned long long  _userType;
    unsigned long long  _userTypeSource;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSUUID *loiIdentifier;
@property (nonatomic, readonly) RTMapItem *mapItem;
@property (nonatomic, readonly) unsigned long long placeType;
@property (nonatomic, readonly) NSString *preferredName;
@property (nonatomic, readonly) RTLocation *referenceLocation;
@property (nonatomic, readonly) unsigned long long userType;
@property (nonatomic, readonly) unsigned long long userTypeSource;

+ (id)placeTypeToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)userSpecificPlaceTypeSourceToString:(unsigned long long)arg1;
+ (id)userSpecificPlaceTypeToString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapItem:(id)arg1 userType:(unsigned long long)arg2 userTypeSource:(unsigned long long)arg3 placeType:(unsigned long long)arg4 referenceLocation:(id)arg5 confidence:(double)arg6 loiIdentifier:(id)arg7;
- (id)initWithMapItem:(id)arg1 userType:(unsigned long long)arg2 userTypeSource:(unsigned long long)arg3 placeType:(unsigned long long)arg4 referenceLocation:(id)arg5 confidence:(double)arg6 loiIdentifier:(id)arg7 preferredName:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPlaceInference:(id)arg1;
- (id)loiIdentifier;
- (id)mapItem;
- (id)nameFromUserType:(unsigned long long)arg1;
- (unsigned long long)placeType;
- (id)preferredName;
- (id)referenceLocation;
- (unsigned long long)userType;
- (unsigned long long)userTypeSource;

@end

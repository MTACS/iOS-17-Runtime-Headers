
@interface SPSafeLocation : NSObject <NSCopying, NSSecureCoding> {
    long long  _approvalState;
    NSSet * _associatedBeacons;
    NSUUID * _identifier;
    CLLocation * _location;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic) long long approvalState;
@property (nonatomic, copy) NSSet *associatedBeacons;
@property (nonatomic, readonly) double course;
@property (nonatomic, readonly) double courseAccuracy;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double speedAccuracy;
@property (nonatomic) long long type;
@property (nonatomic, readonly) double verticalAccuracy;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)altitude;
- (long long)approvalState;
- (id)associatedBeacons;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (double)courseAccuracy;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 name:(id)arg3 location:(id)arg4 associatedBeacons:(id)arg5 approvalState:(long long)arg6;
- (id)initWithType:(long long)arg1 name:(id)arg2 location:(id)arg3 approvalState:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (id)location;
- (double)longitude;
- (id)mutableSafeLocation;
- (id)name;
- (void)setApprovalState:(long long)arg1;
- (void)setAssociatedBeacons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (double)speed;
- (double)speedAccuracy;
- (long long)type;
- (double)verticalAccuracy;

@end

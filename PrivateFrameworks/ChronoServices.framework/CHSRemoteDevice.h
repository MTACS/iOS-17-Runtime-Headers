
@interface CHSRemoteDevice : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _currentSupportedVersion;
    NSString * _deviceID;
    bool  _isPossibleSource;
    NSDate * _lastConnectionDate;
    long long  _minSupportedVersion;
    NSString * _name;
    long long  _pairingState;
    NSUUID * _relationshipID;
}

@property (nonatomic, readonly) long long currentSupportedVersion;
@property (nonatomic, readonly, copy) NSString *deviceID;
@property (nonatomic, readonly) bool isPossibleSource;
@property (nonatomic, readonly, copy) NSDate *lastConnectionDate;
@property (nonatomic, readonly) long long minSupportedVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long pairingState;
@property (nonatomic, readonly, copy) NSUUID *relationshipID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentSupportedVersion;
- (id)description;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 relationshipID:(id)arg2 deviceID:(id)arg3 currentSupportedVersion:(long long)arg4 minSupportedVersion:(long long)arg5 isPossibleSource:(bool)arg6 pairingState:(long long)arg7 lastConnectionDate:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isPossibleSource;
- (id)lastConnectionDate;
- (long long)minSupportedVersion;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (long long)pairingState;
- (id)relationshipID;

@end

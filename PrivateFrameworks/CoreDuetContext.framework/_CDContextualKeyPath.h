
@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deviceID;
    bool  _isEphemeral;
    bool  _isUserCentric;
    NSString * _key;
    bool  _sensitiveContents;
}

@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic) bool isEphemeral;
@property (nonatomic) bool isUserCentric;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) bool sensitiveContents;

+ (id)ephemeralKeyPathWithKey:(id)arg1;
+ (id)keyPathWithKey:(id)arg1;
+ (id)keyPathWithKey:(id)arg1 isUserCentric:(bool)arg2;
+ (id)remoteKeyPathForKeyPath:(id)arg1 forDeviceID:(id)arg2;
+ (id)remotekeyPathForKeyPath:(id)arg1 forDevice:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 forDevice:(unsigned long long)arg2 isUserCentric:(bool)arg3 isEphemeral:(bool)arg4;
- (id)initWithKey:(id)arg1 forDeviceID:(id)arg2 isUserCentric:(bool)arg3 isEphemeral:(bool)arg4;
- (bool)isEphemeral;
- (bool)isEqual:(id)arg1;
- (bool)isMultiDeviceKeyPath;
- (bool)isUserCentric;
- (id)key;
- (bool)sensitiveContents;
- (void)setDeviceID:(id)arg1;
- (void)setIsEphemeral:(bool)arg1;
- (void)setIsUserCentric:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSensitiveContents:(bool)arg1;

@end

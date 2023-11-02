
@interface PCHomeKitIdentifier : PCDeviceIdentifier <NSSecureCoding> {
    NSUUID * _accessoryID;
    NSUUID * _homeID;
}

@property (nonatomic, readonly, copy) NSUUID *accessoryID;
@property (nonatomic, readonly, copy) NSUUID *homeID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeID;
- (id)initWithAccessoryID:(id)arg1 homeID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

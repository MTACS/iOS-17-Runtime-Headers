
@interface COHomeKitAccessoryMemento : NSObject <NSCopying, NSSecureCoding> {
    NSString * _IDSIdentifier;
    NSString * _categoryType;
    NSUUID * _homeUniqueIdentifier;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *IDSIdentifier;
@property (nonatomic, readonly, copy) NSString *categoryType;
@property (nonatomic, readonly) NSUUID *homeUniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IDSIdentifier;
- (id)categoryType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeUniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeKitAccessory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHomeKitAccessoryMemento:(id)arg1;
- (id)uniqueIdentifier;

@end

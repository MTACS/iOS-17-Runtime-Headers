
@interface WFHMHomeAreaDescriptor : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _areaType;
    NSUUID * _homeIdentifier;
    NSString * _homeName;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) unsigned long long areaType;
@property (nonatomic, readonly) NSUUID *homeIdentifier;
@property (nonatomic, readonly) NSString *homeName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)areaType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeIdentifier;
- (id)homeName;
- (id)initWithCoder:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)initWithRoom:(id)arg1 inHome:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 homeIdentifier:(id)arg2 name:(id)arg3 areaType:(unsigned long long)arg4 homeName:(id)arg5;
- (id)initWithZone:(id)arg1 inHome:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)uniqueIdentifier;

@end

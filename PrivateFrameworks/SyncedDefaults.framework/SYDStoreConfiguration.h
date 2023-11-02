
@interface SYDStoreConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _processName;
    SYDStoreID * _storeID;
}

@property (nonatomic, copy) NSString *processName;
@property (nonatomic, retain) SYDStoreID *storeID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)processName;
- (void)setProcessName:(id)arg1;
- (void)setStoreID:(id)arg1;
- (id)storeID;

@end

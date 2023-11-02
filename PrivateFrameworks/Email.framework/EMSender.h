
@interface EMSender : NSObject <NSCopying, NSSecureCoding> {
    EFLocked * _addresses;
    long long  _bucket;
    NSString * _contactIdentifier;
    long long  _databaseID;
    struct EFAtomicObject { 
        _Atomic long long cfObject; 
    }  _displayName;
}

@property (nonatomic, readonly, copy) NSArray *addresses;
@property long long bucket;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property long long databaseID;
@property (nonatomic, readonly, copy) NSString *displayName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bestDisplayNameFromDisplayNames:(id)arg1;
- (void)addAddress:(id)arg1;
- (id)addresses;
- (long long)bucket;
- (long long)compare:(id)arg1;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)databaseID;
- (void)dealloc;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabaseID:(long long)arg1 addresses:(id)arg2 contactIdentifier:(id)arg3 bucket:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (void)removeAddress:(id)arg1;
- (void)setBucket:(long long)arg1;
- (void)setDatabaseID:(long long)arg1;

@end

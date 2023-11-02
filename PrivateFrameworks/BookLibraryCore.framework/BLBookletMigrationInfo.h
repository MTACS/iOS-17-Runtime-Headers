
@interface BLBookletMigrationInfo : NSObject <NSCopying, NSSecureCoding> {
    long long  _migrationState;
    long long  _storeID;
}

@property (nonatomic) long long migrationState;
@property (nonatomic) long long storeID;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreID:(long long)arg1 migrationState:(long long)arg2;
- (long long)migrationState;
- (void)setMigrationState:(long long)arg1;
- (void)setStoreID:(long long)arg1;
- (long long)storeID;

@end

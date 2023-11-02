
@interface HKCloudSyncDatabaseDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _scope;
    NSArray * _zoneDescriptions;
}

@property (nonatomic, readonly, copy) NSString *scope;
@property (nonatomic, readonly, copy) NSArray *zoneDescriptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScope:(id)arg1 zoneDescriptions:(id)arg2;
- (id)scope;
- (id)zoneDescriptions;

@end

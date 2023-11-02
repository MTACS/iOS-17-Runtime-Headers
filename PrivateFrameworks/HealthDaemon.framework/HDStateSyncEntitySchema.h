
@interface HDStateSyncEntitySchema : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _dataKeys;
    NSString * _domain;
}

@property (nonatomic, retain) NSSet *dataKeys;
@property (nonatomic, readonly, copy) NSString *domain;

+ (id)schemaWithDomain:(id)arg1 dataKeys:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataKeys;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithWithDomain:(id)arg1 dataKeys:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDataKeys:(id)arg1;

@end

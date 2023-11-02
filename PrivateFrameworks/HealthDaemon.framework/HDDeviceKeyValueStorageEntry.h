
@interface HDDeviceKeyValueStorageEntry : NSObject {
    NSString * _domain;
    NSString * _key;
    NSDate * _modificationDate;
    long long  _protectionCategory;
    HDSyncIdentity * _syncIdentity;
    NSData * _value;
}

@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly) long long protectionCategory;
@property (nonatomic, readonly, copy) HDSyncIdentity *syncIdentity;
@property (nonatomic, readonly, copy) NSData *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateValue:(id*)arg1;
- (id)description;
- (id)domain;
- (unsigned long long)hash;
- (id)initWithDomain:(id)arg1 key:(id)arg2 value:(id)arg3 modificationDate:(id)arg4 syncIdentity:(id)arg5 category:(long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)modificationDate;
- (id)numberValue:(id*)arg1;
- (long long)protectionCategory;
- (id)stringValue:(id*)arg1;
- (id)syncIdentity;
- (id)value;

@end


@interface HKDeviceKeyValueStorageEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString * _domain;
    NSString * _key;
    NSDate * _modificationDate;
    NSData * _value;
}

@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSData *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateValue:(id*)arg1;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 key:(id)arg2 value:(id)arg3 modificationDate:(id)arg4;
- (id)key;
- (id)modificationDate;
- (id)numberValue:(id*)arg1;
- (id)stringValue:(id*)arg1;
- (id)value;

@end

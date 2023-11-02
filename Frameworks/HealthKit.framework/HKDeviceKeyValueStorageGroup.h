
@interface HKDeviceKeyValueStorageGroup : NSObject <NSCopying, NSSecureCoding> {
    HKDeviceContext * _deviceContext;
    NSArray * _storageEntries;
}

@property (nonatomic, readonly) HKDeviceContext *deviceContext;
@property (nonatomic, readonly) NSArray *storageEntries;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceContext:(id)arg1 storageEntries:(id)arg2;
- (id)storageEntries;

@end

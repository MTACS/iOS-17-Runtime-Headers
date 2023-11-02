
@interface HDDeviceKeyValueStorageGroup : NSObject {
    HDDeviceContext * _deviceContext;
    NSArray * _storageEntries;
}

@property (nonatomic, readonly) HDDeviceContext *deviceContext;
@property (nonatomic, readonly) NSArray *storageEntries;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceContext;
- (id)initWithDeviceContext:(id)arg1 storageEntries:(id)arg2;
- (id)storageEntries;

@end

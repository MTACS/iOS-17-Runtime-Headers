
@interface DNDSMeDeviceStore : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSString * _meDeviceName;
    NSNumber * _meDeviceStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *meDeviceName;
@property (nonatomic, readonly, copy) NSNumber *meDeviceStatus;
@property (readonly) Class superclass;

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithStatus:(id)arg1 name:(id)arg2;
- (id)_initWithStore:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)meDeviceName;
- (id)meDeviceStatus;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end

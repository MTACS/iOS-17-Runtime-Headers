
@interface HDCloudSyncSerializedRecord : NSObject {
    NSData * _protectedDBData;
    NSData * _systemData;
    NSData * _unprotectedDBData;
}

@property (nonatomic, readonly, copy) NSData *protectedDBData;
@property (nonatomic, readonly, copy) NSData *systemData;
@property (nonatomic, readonly, copy) NSData *unprotectedDBData;

- (void).cxx_destruct;
- (id)initWithEncodedSystemData:(id)arg1 unprotectedDBData:(id)arg2 protectedDBData:(id)arg3;
- (id)protectedDBData;
- (id)systemData;
- (id)unprotectedDBData;

@end


@interface BMContextSyncDeviceActivityLevel : BMEventBase <BMStoreData> {
    NSString * _ID;
    NSArray * _deviceActivityState;
    NSString * _deviceUUID;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *deviceActivityState;
@property (nonatomic, readonly) NSString *deviceUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)ID;
- (id)_deviceActivityStateJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceActivityState;
- (id)deviceUUID;
- (id)initByReadFrom:(id)arg1;
- (id)initWithID:(id)arg1 deviceUUID:(id)arg2 deviceActivityState:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end

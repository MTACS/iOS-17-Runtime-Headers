
@interface BMDeviceBluetoothGATTSession : BMEventBase <BMStoreData> {
    NSString * _bundleID;
    bool  _hasSupportsBackgrounding;
    bool  _hasSupportsStateRestoration;
    NSArray * _serviceUUID;
    int  _sessionState;
    NSString * _sessionType;
    bool  _supportsBackgrounding;
    bool  _supportsStateRestoration;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSupportsBackgrounding;
@property (nonatomic) bool hasSupportsStateRestoration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *serviceUUID;
@property (nonatomic, readonly) int sessionState;
@property (nonatomic, readonly) NSString *sessionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBackgrounding;
@property (nonatomic, readonly) bool supportsStateRestoration;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_serviceUUIDJSONArray;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasSupportsBackgrounding;
- (bool)hasSupportsStateRestoration;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBundleID:(id)arg1 serviceUUID:(id)arg2 sessionType:(id)arg3 sessionState:(int)arg4 supportsBackgrounding:(id)arg5 supportsStateRestoration:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)serviceUUID;
- (int)sessionState;
- (id)sessionType;
- (void)setHasSupportsBackgrounding:(bool)arg1;
- (void)setHasSupportsStateRestoration:(bool)arg1;
- (bool)supportsBackgrounding;
- (bool)supportsStateRestoration;
- (void)writeTo:(id)arg1;

@end

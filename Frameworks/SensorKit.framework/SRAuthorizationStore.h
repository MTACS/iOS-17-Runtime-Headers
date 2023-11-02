
@interface SRAuthorizationStore : NSObject {
    int  _notifyToken;
    NSHashTable * _readerAuthorizationDelegates;
    NSDictionary * _readerAuthorizationGroups;
    NSDictionary * _readerAuthorizationValues;
    NSDictionary * _readerLastModifiedAuthorizationTimes;
    bool  _sensorKitActive;
    NSSet * _sensors;
    <SRTCCStore> * _tccStore;
    NSObject<OS_dispatch_queue> * _updateQueue;
    NSHashTable * _writerAuthorizationDelegates;
    NSDictionary * _writerAuthorizationGroups;
    NSDictionary * _writerAuthorizationValues;
}

@property (copy) NSDictionary *readerAuthorizationGroups;
@property (copy) NSDictionary *readerAuthorizationValues;
@property (copy) NSDictionary *readerLastModifiedAuthorizationTimes;
@property bool sensorKitActive;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *updateQueue;
@property (copy) NSDictionary *writerAuthorizationGroups;
@property (copy) NSDictionary *writerAuthorizationValues;

+ (id)allSensorsStore;
+ (void)initialize;
+ (id)sharedAuthorizationStoreForSensors:(id)arg1;

- (void)addReaderAuthorizationDelegate:(id)arg1;
- (void)addWriterAuthorizationDelegate:(id)arg1;
- (bool)checkAccessForService:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (void)dealloc;
- (id)initWithSensors:(id)arg1;
- (void)listenForAuthorizationUpdates:(bool)arg1;
- (id)readerAuthorizationBundleIdValues;
- (id)readerAuthorizationGroups;
- (id)readerAuthorizationValues;
- (id)readerLastModifiedAuthorizationTimes;
- (void)removeReaderAuthorizationDelegate:(id)arg1;
- (void)removeWriterAuthorizationDelegate:(id)arg1;
- (void)resetAllAuthorizations;
- (void)resetAllAuthorizationsForBundleId:(id)arg1;
- (void)resetAuthorizationForService:(id)arg1 bundleId:(id)arg2;
- (bool)sensorHasReaderAuthorization:(id)arg1;
- (bool)sensorHasReaderAuthorization:(id)arg1 forBundleId:(id)arg2;
- (bool)sensorKitActive;
- (bool)setAuthorizationForBundleId:(id)arg1 service:(id)arg2 value:(bool)arg3;
- (bool)setAuthorizationForBundleId:(id)arg1 service:(id)arg2 value:(bool)arg3 setOverride:(bool)arg4;
- (void)setReaderAuthorizationGroups:(id)arg1;
- (void)setReaderAuthorizationValues:(id)arg1;
- (void)setReaderLastModifiedAuthorizationTimes:(id)arg1;
- (void)setSensorKitActive:(bool)arg1;
- (void)setUpdateQueue:(id)arg1;
- (void)setWriterAuthorizationGroups:(id)arg1;
- (void)setWriterAuthorizationValues:(id)arg1;
- (id)updateQueue;
- (id)writerAuthorizationGroups;
- (id)writerAuthorizationValues;

@end

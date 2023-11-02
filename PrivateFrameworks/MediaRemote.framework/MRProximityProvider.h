
@interface MRProximityProvider : NSObject <MRMigrationDeviceDelegate, PCProvider> {
    id /* block */  _behaviorCallback;
    NSMutableDictionary * _behaviorResults;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _displayContextHandler;
    NSString * _migratingDevice;
    MRMigrationDevice * _proactiveDevice;
    id /* block */  _progressEventHandler;
    NSMutableSet * _providingDevices;
    NSMutableDictionary * _remoteDevices;
}

@property (nonatomic, copy) id /* block */ behaviorCallback;
@property (nonatomic, retain) NSMutableDictionary *behaviorResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ displayContextHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *migratingDevice;
@property (nonatomic, retain) MRMigrationDevice *proactiveDevice;
@property (nonatomic, copy) id /* block */ progressEventHandler;
@property (nonatomic, retain) NSMutableSet *providingDevices;
@property (nonatomic, retain) NSMutableDictionary *remoteDevices;
@property (readonly) Class superclass;

+ (void)_migrate:(id)arg1 destinationEndpoint:(id)arg2 destinationUID:(id)arg3 outputDevice:(id)arg4 label:(id)arg5 completion:(id /* block */)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addDeviceIfNeeded:(id)arg1;
- (void)_beginProvidingDisplayContextIfNeeded:(id)arg1;
- (id)_deviceForUID:(id)arg1;
- (id)_displayContextForDevice:(id)arg1 withRemotePlayerState:(id)arg2 proactivePlayerState:(id)arg3 migrationBehavior:(id)arg4;
- (id)_displayStringForContentItem:(id)arg1;
- (id)_effectivePlayerStateForDevice:(id)arg1;
- (void)_endProvidingDisplayContextIfNeeded:(id)arg1;
- (void)_migrateForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)_migrationBehaviorForRemoteDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)_migrationBehaviorForRemoteDevice:(id)arg1 proactiveDevice:(id)arg2 completion:(id /* block */)arg3;
- (id)_nameForDevice:(id)arg1 inEndpoint:(id)arg2;
- (id)_outputDeviceWithUID:(id)arg1 fromSource:(id)arg2 andDestination:(id)arg3;
- (id)_persistArtworkData:(id)arg1 forDevice:(id)arg2;
- (void)_provideDisplayContextForDevice:(id)arg1;
- (void)_recalculateMigrationBehaviorAndProvideUpdatedDisplayContextForDevice:(id)arg1;
- (void)_removeDeviceIfNeeded:(id)arg1;
- (id /* block */)behaviorCallback;
- (id)behaviorResults;
- (id)contentToDisplayForDevice:(id)arg1;
- (id)description;
- (void)device:(id)arg1 playerStateDidChange:(id)arg2;
- (void)device:(id)arg1 stateDidChange:(unsigned long long)arg2;
- (id)dictionaryRepresentation;
- (id)dispatchQueue;
- (id /* block */)displayContextHandler;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointForDevice:(id)arg1;
- (void)handleGroupSessionNotification:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)migratingDevice;
- (long long)migrationActionForProactivePlayer:(id)arg1 proactiveEndpoint:(id)arg2 remotePlayer:(id)arg3 remoteEndpoint:(id)arg4 reason:(id*)arg5;
- (id)proactiveDevice;
- (id /* block */)progressEventHandler;
- (id)providingDevices;
- (void)receiveEvent:(id)arg1;
- (id)remoteDevices;
- (void)setBehaviorCallback:(id /* block */)arg1;
- (void)setBehaviorResults:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDisplayContextHandler:(id /* block */)arg1;
- (void)setMigratingDevice:(id)arg1;
- (void)setProactiveDevice:(id)arg1;
- (void)setProgressEventHandler:(id /* block */)arg1;
- (void)setProvidingDevices:(id)arg1;
- (void)setRemoteDevices:(id)arg1;

@end

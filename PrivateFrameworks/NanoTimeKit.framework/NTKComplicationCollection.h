
@interface NTKComplicationCollection : NSObject <NTKComplicationStoreClient> {
    NSString * _collectionIdentifier;
    NSMutableDictionary * _complicationDescriptors;
    NSXPCConnection * _connection;
    NSLock * _descriptorsLock;
    NSUUID * _deviceUUID;
    bool  _hasLoaded;
    NSMutableArray * _loadCallbacks;
    NSMutableDictionary * _localizeableSampleDataTemplates;
    NSHashTable * _observers;
    NSLock * _observersLock;
    bool  _registrationNeeded;
    NSNumber * _seqId;
    NSRecursiveLock * _templatesLock;
    NSMutableArray * _updatesEnqueuedWhileSuspended;
    bool  _updatesSuspended;
}

@property (nonatomic, readonly) NSString *collectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *deviceUUID;
@property (nonatomic, readonly) bool hasLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_bundleForWatchKitAppID:(id)arg1;
+ (id)lsSDKVersionForApplicationID:(id)arg1;
+ (id)newApricotCollection;
+ (id)sharedBundleCollection;
+ (id)sharedRemoteCollection;

- (void).cxx_destruct;
- (id)_fetchOrCreateSampleDataForClientIdentifier:(id)arg1 descriptor:(id)arg2 family:(long long)arg3;
- (void)_handleConnectionInterrupted;
- (void)_notifyLoaded;
- (void)_notifyReloaded;
- (void)_notifyRemovedComplicationSampleTemplatesForClientIdentifier:(id)arg1 descriptor:(id)arg2;
- (void)_notifyUpdateComplicationDescriptorsForClientIdentifier:(id)arg1;
- (void)_notifyUpdateComplicationSampleTemplateForClientIdentifier:(id)arg1 descriptor:(id)arg2;
- (void)_performOrEnqueueUpdate:(id /* block */)arg1;
- (void)_register;
- (void)_registerIfNeeded;
- (void)_removeComplicationSampleTemplatesForClientIdentifier:(id)arg1 descriptor:(id)arg2;
- (id)_sampleDataForClientIdentifier:(id)arg1 descriptor:(id)arg2;
- (void)_sendToDaemonRemoveComplicationSampleTemplatesForClientIdentifier:(id)arg1 descriptor:(id)arg2;
- (void)_sendToDaemonUpdatedComplicationDescriptors:(id)arg1 forClientIdentifier:(id)arg2;
- (void)_sendToDaemonUpdatedSampleDataTemplate:(id)arg1 forClientIdentifier:(id)arg2 descriptor:(id)arg3 family:(long long)arg4;
- (void)_setComplicationDescriptors:(id)arg1 forClientIdentifier:(id)arg2;
- (void)_setLocalizedSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 descriptor:(id)arg3 family:(long long)arg4;
- (void)_setLocalizedSampleTemplateReference:(id)arg1 forClientIdentifier:(id)arg2 descriptor:(id)arg3 family:(long long)arg4;
- (void)_throwIfNotLoaded:(SEL)arg1;
- (void)addObserver:(id)arg1;
- (id)clients;
- (id)clientsSupportingFamily:(long long)arg1;
- (id)collectionIdentifier;
- (id)complicationDescriptorsForClientIdentifier:(id)arg1;
- (void)dealloc;
- (id)deviceUUID;
- (bool)hasLoaded;
- (bool)hasSampleTemplateForClientIdentifier:(id)arg1 descriptor:(id)arg2 family:(long long)arg3;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;
- (void)loadFullCollectionWithLocalizableSampleTemplates:(id)arg1 complicationDescriptors:(id)arg2 seqId:(id)arg3;
- (void)performAfterLoad:(id /* block */)arg1;
- (void)removeAllComplicationSampleTemplatesExceptThoseWithClientIdentifiers:(id)arg1;
- (void)removeComplicationSampleTemplatesForClientIdentifier:(id)arg1 descriptor:(id)arg2;
- (void)removeComplicationSampleTemplatesForClientIdentifier:(id)arg1 descriptor:(id)arg2 seqId:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)resumeUpdatesFromDaemon;
- (id)sampleTemplateForClientIdentifier:(id)arg1 descriptor:(id)arg2 applicationID:(id)arg3 family:(long long)arg4;
- (void)setComplicationDescriptors:(id)arg1 forClientIdentifier:(id)arg2;
- (void)setLocalizableSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 descriptor:(id)arg3 family:(long long)arg4;
- (id)supportedTemplateFamiliesForClientIdentifier:(id)arg1 descriptor:(id)arg2;
- (void)suspendUpdatesFromDaemon;
- (void)updateComplicationDescriptors:(id)arg1 forClientIdentifier:(id)arg2 seqId:(id)arg3;
- (void)updateSampleTemplateReference:(id)arg1 forClientIdentifier:(id)arg2 descriptor:(id)arg3 family:(long long)arg4 seqId:(id)arg5;

@end


@interface CMIOExtensionProvider : NSObject {
    NSArray * _changedDeviceIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _changedDeviceIDsLock;
    NSMutableDictionary * _changedProperties;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _changedPropertiesLock;
    NSArray * _changedStreamIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _changedStreamIDsLock;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSArray * _connectedClients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectedClientsLock;
    NSMutableDictionary * _contextsMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contextsMapLock;
    NSMutableArray * _contextsRegistration;
    NSString * _description;
    NSMutableArray * _devices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _devicesLock;
    NSMutableDictionary * _devicesMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _devicesMapLock;
    NSArray * _nonStreamingProxyFrontedExtensionPIDs;
    bool  _nonStreamingProxyFrontedExtensionPIDsHasChanged;
    NSMutableDictionary * _pendingCountMap;
    <CMIOExtensionProviderSource> * _source;
    NSMutableDictionary * _streamsMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _streamsMapLock;
}

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (copy) NSArray *connectedClients;
@property (readonly, copy) NSArray *devices;
@property (readonly) <CMIOExtensionProviderSource> *source;

+ (void)ignoreSIGTERM;
+ (id)internalProperties;
+ (id)internalWritableProperties;
+ (id)newActivityAttributionWithToken:(struct { unsigned int x1[8]; })arg1;
+ (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)providerWithSource:(id)arg1 clientQueue:(id)arg2;
+ (id)sharedProvider;
+ (void)startServiceWithProvider:(id)arg1;

- (void).cxx_destruct;
- (void)_addAvailablePropertyStatesForDevice:(id)arg1 toDictionary:(id)arg2;
- (void)_clientQueue_decrementPendingStreamStartCountForClientID:(id)arg1 streamID:(id)arg2;
- (void)_clientQueue_incrementPendingStartStreamCountForClientID:(id)arg1 streamID:(id)arg2;
- (id)_clientQueue_internalPropertyStatesForProperties:(id)arg1;
- (void)_clientQueue_notifyDevicePropertiesChangedWithDeviceID:(id)arg1 propertyStates:(id)arg2;
- (void)_clientQueue_notifyIsRunningSomewhereForStream:(id)arg1;
- (void)_clientQueue_notifyStreamPropertiesChangedWithStreamID:(id)arg1 propertyStates:(id)arg2;
- (int)_clientQueue_pendingStartStreamCountForClient:(id)arg1 streamID:(id)arg2;
- (void)_clientQueue_removePendingStartStreamCountForClient:(id)arg1 streamID:(id)arg2;
- (void)_clientQueue_sendSampleForStream:(id)arg1 sample:(id)arg2;
- (void)_clientQueue_startStreamForClientID:(id)arg1 streamID:(id)arg2 requestAudio:(bool)arg3 requestVideo:(bool)arg4 reply:(id /* block */)arg5;
- (void)_performDeferredStreamStartsForClient:(id)arg1 streamID:(id)arg2 requestVideo:(bool)arg3 requestAudio:(bool)arg4;
- (bool)addDevice:(id)arg1 error:(id*)arg2;
- (long long)authorizationStatusForClient:(id)arg1 mediaType:(unsigned int)arg2;
- (void)availableDevicePropertiesForClientID:(id)arg1 deviceID:(id)arg2 reply:(id /* block */)arg3;
- (void)availablePluginPropertiesForClientID:(id)arg1 reply:(id /* block */)arg2;
- (void)availableStreamPropertiesForClientID:(id)arg1 streamID:(id)arg2 reply:(id /* block */)arg3;
- (void)beginProviderContextRegistration:(id)arg1;
- (void)captureAsyncStillImageForClientID:(id)arg1 streamID:(id)arg2 uniqueID:(long long)arg3 options:(id)arg4 reply:(id /* block */)arg5;
- (id)clientQueue;
- (id)connectedClients;
- (void)consumeSampleBufferForStream:(id)arg1 client:(id)arg2 reply:(id /* block */)arg3;
- (void)dealloc;
- (id)description;
- (void)devicePropertyStatesForClientID:(id)arg1 deviceID:(id)arg2 properties:(id)arg3 reply:(id /* block */)arg4;
- (void)deviceStatesForClientID:(id)arg1 deviceID:(id)arg2 reply:(id /* block */)arg3;
- (id)devices;
- (void)enqueueReactionEffectForClientID:(id)arg1 streamID:(id)arg2 reactionType:(id)arg3 reply:(id /* block */)arg4;
- (void)finishProviderContextRegistration:(id)arg1;
- (id)initWithSource:(id)arg1 clientQueue:(id)arg2;
- (void)notifyAvailableDevicesChanged:(id)arg1;
- (void)notifyAvailableStreamsChangedWithDeviceID:(id)arg1 streamIDs:(id)arg2;
- (void)notifyPropertiesChanged:(id)arg1;
- (void)notifyScheduledOutputChangedForStream:(id)arg1 scheduledOutput:(id)arg2;
- (void)pluginPropertyStatesForClientID:(id)arg1 properties:(id)arg2 reply:(id /* block */)arg3;
- (void)pluginStatesForClientID:(id)arg1 reply:(id /* block */)arg2;
- (bool)registerDevice:(id)arg1 error:(id*)arg2;
- (bool)registerStream:(id)arg1 withDeviceID:(id)arg2 error:(id*)arg3;
- (bool)removeDevice:(id)arg1 error:(id*)arg2;
- (void)removeProviderContext:(id)arg1;
- (void)removeSystemStatusAttributionsForClient:(id)arg1 stream:(id)arg2;
- (void)requestAccessForClient:(id)arg1 mediaType:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)setConnectedClients:(id)arg1;
- (void)setDevicePropertyValuesForClientID:(id)arg1 deviceID:(id)arg2 propertyValues:(id)arg3 reply:(id /* block */)arg4;
- (void)setPluginPropertyValuesForClientID:(id)arg1 propertyValues:(id)arg2 reply:(id /* block */)arg3;
- (void)setStreamPropertyValuesForClientID:(id)arg1 streamID:(id)arg2 propertyValues:(id)arg3 reply:(id /* block */)arg4;
- (id)source;
- (void)startStreamForClientID:(id)arg1 streamID:(id)arg2 reply:(id /* block */)arg3;
- (void)stopStreamForClientID:(id)arg1 streamID:(id)arg2 reply:(id /* block */)arg3;
- (void)streamPropertyStatesForClientID:(id)arg1 streamID:(id)arg2 properties:(id)arg3 reply:(id /* block */)arg4;
- (bool)unregisterDevice:(id)arg1 error:(id*)arg2;
- (bool)unregisterStream:(id)arg1 withDeviceID:(id)arg2 notify:(bool)arg3 error:(id*)arg4;
- (void)updateNonStreamingProxyFrontedExtensionPIDs:(id)arg1;

@end

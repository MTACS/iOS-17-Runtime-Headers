
@interface CMIOExtensionSessionProvider : NSObject <CMIOExtensionProviderHostDelegate> {
    NSSet * _availableProperties;
    NSString * _bundleID;
    <CMIOExtensionSessionProviderDelegate> * _delegate;
    NSString * _description;
    NSArray * _deviceIDs;
    NSMutableDictionary * _devicesMap;
    CMIOExtensionProviderHostContext * _hostContext;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _propertyStates;
    NSMutableDictionary * _streamsMap;
}

@property (nonatomic, readonly, copy) NSSet *availableProperties;
@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CMIOExtensionSessionProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CMIOExtensionProviderHostContext *hostContext;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

+ (id)sessionProviderWithEndpoint:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)availableProperties;
- (id)bundleID;
- (id)cachedPropertyStateForProperty:(id)arg1;
- (id)cachedPropertyStatesForProperties:(id)arg1;
- (void)completeTransaction;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)devices;
- (void)extension:(id)arg1 availableDevicesChanged:(id)arg2;
- (void)extension:(id)arg1 availableStreamsChangedWithDeviceID:(id)arg2 streamIDs:(id)arg3;
- (void)extension:(id)arg1 devicePropertiesChangedWithDeviceID:(id)arg2 propertyStates:(id)arg3;
- (void)extension:(id)arg1 didFailWithError:(id)arg2;
- (void)extension:(id)arg1 pluginPropertiesChanged:(id)arg2;
- (void)extension:(id)arg1 pullSampleWithStreamID:(id)arg2 reply:(id /* block */)arg3;
- (void)extension:(id)arg1 receivedSampleWithStreamID:(id)arg2 sample:(id)arg3;
- (void)extension:(id)arg1 streamPropertiesChangedWithStreamID:(id)arg2 propertyStates:(id)arg3;
- (void)extension:(id)arg1 streamScheduledOutputChangedWithStreamID:(id)arg2 scheduledOutput:(id)arg3;
- (void)extensionHasBeenInvalidated:(id)arg1;
- (id)hostContext;
- (id)initWithEndpoint:(id)arg1 delegate:(id)arg2;
- (bool)isInvalidated;
- (void)propertyStatesForProperties:(id)arg1 reply:(id /* block */)arg2;
- (void)refreshExtensionConnection;
- (bool)registerStream:(id)arg1 streamID:(id)arg2;
- (void)setBundleID:(id)arg1;
- (void)setPropertyValues:(id)arg1 reply:(id /* block */)arg2;
- (id)unregisterStreamID:(id)arg1;

@end

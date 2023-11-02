
@interface MRAVRoutingDiscoverySession : NSObject {
    bool  _alwaysAllowUpdates;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMapTable * _clientDiscoveryStates;
    NSArray * _endpoints;
    NSMutableDictionary * _endpointsAddedCallbacks;
    NSMutableDictionary * _endpointsChangedCallbacks;
    NSMutableDictionary * _endpointsModifiedCallbacks;
    NSMutableDictionary * _endpointsRemovedCallbacks;
    bool  _onlyDiscoversBluetoothDevices;
    NSArray * _outputDevices;
    NSMutableDictionary * _outputDevicesAddedCallbacks;
    NSMutableDictionary * _outputDevicesChangedCallbacks;
    NSMutableDictionary * _outputDevicesModifiedCallbacks;
    NSMutableDictionary * _outputDevicesRemovedCallbacks;
    bool  _populatesExternalDevice;
    unsigned int  _previousEndpointsDiscoveryMode;
    unsigned int  _previousOutputDevicesDiscoveryMode;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) bool alwaysAllowUpdates;
@property (nonatomic, readonly) NSArray *availableEndpoints;
@property (nonatomic, readonly) NSArray *availableOutputDevices;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, retain) NSMapTable *clientDiscoveryStates;
@property (nonatomic, readonly) bool devicePresenceDetected;
@property (nonatomic) unsigned int discoveryMode;
@property (nonatomic, readonly) unsigned int endpointFeatures;
@property (nonatomic, copy) NSArray *endpoints;
@property (nonatomic, retain) NSMutableDictionary *endpointsAddedCallbacks;
@property (nonatomic, retain) NSMutableDictionary *endpointsChangedCallbacks;
@property (nonatomic, retain) NSMutableDictionary *endpointsModifiedCallbacks;
@property (nonatomic, retain) NSMutableDictionary *endpointsRemovedCallbacks;
@property (nonatomic) bool onlyDiscoversBluetoothDevices;
@property (nonatomic, copy) NSArray *outputDevices;
@property (nonatomic, retain) NSMutableDictionary *outputDevicesAddedCallbacks;
@property (nonatomic, retain) NSMutableDictionary *outputDevicesChangedCallbacks;
@property (nonatomic, retain) NSMutableDictionary *outputDevicesModifiedCallbacks;
@property (nonatomic, retain) NSMutableDictionary *outputDevicesRemovedCallbacks;
@property (nonatomic) bool populatesExternalDevice;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) unsigned int targetAudioSessionID;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

+ (id)discoverySessionWithConfiguration:(id)arg1;
+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1;
+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1 enableThrottling:(bool)arg2;
+ (id)sharedDiscoverySessionForClass:(Class)arg1 configuration:(id)arg2;

- (void).cxx_destruct;
- (id)addEndpointsAddedCallback:(id /* block */)arg1;
- (id)addEndpointsChangedCallback:(id /* block */)arg1;
- (id)addEndpointsModifiedCallback:(id /* block */)arg1;
- (id)addEndpointsRemovedCallback:(id /* block */)arg1;
- (id)addOutputDevicesAddedCallback:(id /* block */)arg1;
- (id)addOutputDevicesChangedCallback:(id /* block */)arg1;
- (id)addOutputDevicesModifiedCallback:(id /* block */)arg1;
- (id)addOutputDevicesRemovedCallback:(id /* block */)arg1;
- (bool)alwaysAllowUpdates;
- (id)calloutQueue;
- (id)clientDiscoveryStates;
- (id)endpoints;
- (id)endpointsAddedCallbacks;
- (id)endpointsChangedCallbacks;
- (id)endpointsModifiedCallbacks;
- (id)endpointsRemovedCallbacks;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFeatures:(unsigned int)arg1;
- (void)logEndpointsChanged:(id)arg1 oldEndpoints:(id)arg2;
- (void)logOutputDevicesChanged:(id)arg1 oldOutputDevices:(id)arg2;
- (void)notifyEndpointsChanged:(id)arg1;
- (void)notifyOutputDevicesChanged:(id)arg1;
- (bool)onlyDiscoversBluetoothDevices;
- (id)outputDevices;
- (id)outputDevicesAddedCallbacks;
- (id)outputDevicesChangedCallbacks;
- (id)outputDevicesModifiedCallbacks;
- (id)outputDevicesRemovedCallbacks;
- (bool)populatesExternalDevice;
- (void)removeEndpointsAddedCallback:(id)arg1;
- (void)removeEndpointsChangedCallback:(id)arg1;
- (void)removeEndpointsModifiedCallback:(id)arg1;
- (void)removeEndpointsRemovedCallback:(id)arg1;
- (void)removeOutputDevicesAddedCallback:(id)arg1;
- (void)removeOutputDevicesChangedCallback:(id)arg1;
- (void)removeOutputDevicesModifiedCallback:(id)arg1;
- (void)removeOutputDevicesRemovedCallback:(id)arg1;
- (id)serialQueue;
- (void)setAlwaysAllowUpdates:(bool)arg1;
- (void)setClientDiscoveryStates:(id)arg1;
- (void)setEndpoints:(id)arg1;
- (void)setEndpointsAddedCallbacks:(id)arg1;
- (void)setEndpointsChangedCallbacks:(id)arg1;
- (void)setEndpointsModifiedCallbacks:(id)arg1;
- (void)setEndpointsRemovedCallbacks:(id)arg1;
- (void)setOnlyDiscoversBluetoothDevices:(bool)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)setOutputDevicesAddedCallbacks:(id)arg1;
- (void)setOutputDevicesChangedCallbacks:(id)arg1;
- (void)setOutputDevicesModifiedCallbacks:(id)arg1;
- (void)setOutputDevicesRemovedCallbacks:(id)arg1;
- (void)setPopulatesExternalDevice:(bool)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)_replaceOutputDevices:(id)arg1 withOutputDevices:(id)arg2;
- (id)availableOutputDevicesForEndpoint:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (id)_replaceOutputDevices:(id)arg1 withOutputDevices:(id)arg2;
- (id)availableOutputDevicesForEndpoint:(id)arg1;

@end

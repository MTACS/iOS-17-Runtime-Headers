
@interface MIDICISession : NSObject {
    unsigned int  _ciSessionRef;
    unsigned int  _client;
    unsigned int  _destination;
    struct MIDICIDeviceIdentification { 
        unsigned char manufacturer[3]; 
        unsigned char family[2]; 
        unsigned char modelNumber[2]; 
        unsigned char revisionLevel[4]; 
        unsigned char reserved[5]; 
    }  _deviceID;
    MIDICIDeviceInfo * _deviceInfo;
    unsigned char  _maxRequests;
    unsigned int  _maxSysExSize;
    id /* block */  _profileChangedCallback;
    id /* block */  _profileSpecificDataCallback;
    id /* block */  _profileSpecificDataHandler;
    NSMutableArray * _profileStates;
    id /* block */  _propertyChangedCallback;
    id /* block */  _propertyResponseCallback;
    id /* block */  _sessionDisconnectCallback;
    NSArray * _supportedProtocols;
    bool  _supportsProfileCapability;
    bool  _supportsPropertyCapability;
}

@property (nonatomic, readonly) struct MIDICIDeviceIdentification { unsigned char x1[3]; unsigned char x2[2]; unsigned char x3[2]; unsigned char x4[4]; unsigned char x5[5]; } deviceID;
@property (nonatomic, readonly) MIDICIDeviceInfo *deviceInfo;
@property (nonatomic, copy) id /* block */ disconnectBlock;
@property (nonatomic, readonly) unsigned int entity;
@property (nonatomic, readonly) NSNumber *maxPropertyRequests;
@property (nonatomic, readonly) NSNumber *maxSysExSize;
@property (nonatomic, readonly) unsigned int midiDestination;
@property (nonatomic, copy) id /* block */ profileChangedCallback;
@property (nonatomic, copy) id /* block */ profileSpecificDataBlock;
@property (nonatomic, copy) id /* block */ profileSpecificDataHandler;
@property (nonatomic, copy) id /* block */ propertyChangedCallback;
@property (nonatomic, copy) id /* block */ propertyResponseCallback;
@property (nonatomic, readonly) bool supportsProfileCapability;
@property (nonatomic, readonly) bool supportsPropertyCapability;

+ (id)description;

- (void).cxx_destruct;
- (void)addProfileState:(char *)arg1 length:(unsigned int)arg2 channel:(unsigned char)arg3;
- (void)dealloc;
- (id)description;
- (struct MIDICIDeviceIdentification { unsigned char x1[3]; unsigned char x2[2]; unsigned char x3[2]; unsigned char x4[4]; unsigned char x5[5]; })deviceID;
- (id)deviceInfo;
- (bool)disableProfile:(id)arg1 onChannel:(unsigned char)arg2 error:(id*)arg3;
- (id /* block */)disconnectBlock;
- (bool)enableProfile:(id)arg1 onChannel:(unsigned char)arg2 error:(id*)arg3;
- (unsigned int)entity;
- (void)getProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(id /* block */)arg3;
- (void)handleCINotification:(const struct MIDINotification { int x1; unsigned int x2; }*)arg1 withHandler:(id /* block */)arg2;
- (void)hasProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithDiscoveredNode:(id)arg1 dataReadyHandler:(id /* block */)arg2 disconnectHandler:(id /* block */)arg3;
- (id)initWithMIDIDestination:(unsigned int)arg1 dataReadyHandler:(id /* block */)arg2;
- (id)initWithMIDIDestination:(unsigned int)arg1 dataReadyHandler:(id /* block */)arg2 disconnectHandler:(id /* block */)arg3 profileSpecificDataHandler:(id /* block */)arg4;
- (id)initWithMIDIEntity:(unsigned int)arg1 dataReadyHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (id)maxPropertyRequests;
- (id)maxSysExSize;
- (unsigned int)midiDestination;
- (id /* block */)profileChangedCallback;
- (id /* block */)profileSpecificDataBlock;
- (id /* block */)profileSpecificDataHandler;
- (id)profileStateForChannel:(unsigned char)arg1;
- (id /* block */)propertyChangedCallback;
- (id /* block */)propertyResponseCallback;
- (bool)sendProfile:(id)arg1 onChannel:(unsigned char)arg2 profileData:(id)arg3;
- (void)setDisconnectBlock:(id /* block */)arg1;
- (void)setProfileChangedCallback:(id /* block */)arg1;
- (void)setProfileSpecificDataBlock:(id /* block */)arg1;
- (void)setProfileSpecificDataHandler:(id /* block */)arg1;
- (void)setProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(id /* block */)arg3;
- (void)setPropertyChangedCallback:(id /* block */)arg1;
- (void)setPropertyResponseCallback:(id /* block */)arg1;
- (bool)supportsProfileCapability;
- (bool)supportsPropertyCapability;
- (bool)toggleProfile:(id)arg1 onChannel:(unsigned char)arg2 enabling:(bool)arg3 error:(id*)arg4;
- (bool)updateProfileStateForChannel:(unsigned char)arg1 withProfile:(id)arg2 enabled:(bool)arg3;

@end

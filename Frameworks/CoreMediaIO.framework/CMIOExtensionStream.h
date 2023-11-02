
@interface CMIOExtensionStream : NSObject {
    unsigned long long  _audioSequenceNumber;
    NSMutableDictionary * _changedProperties;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _changedPropertiesLock;
    long long  _clockType;
    CMIOExtensionStreamCustomClockConfiguration * _customClockConfiguration;
    NSString * _description;
    long long  _direction;
    NSString * _localizedName;
    CMIOExtensionDevice * _parent;
    unsigned long long  _sequenceNumber;
    <CMIOExtensionStreamSource> * _source;
    struct { 
        int width; 
        int height; 
    }  _statsDimensions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _statsLastSampleTime;
    unsigned int  _statsMediaType;
    unsigned int  _statsSubType;
    NSObject<OS_dispatch_source> * _statsTimer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _statsTotalDuration;
    unsigned long long  _statsTotalSampleCount;
    NSUUID * _streamID;
    NSArray * _streamingClients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _streamingClientsLock;
    NSMutableDictionary * _streamingClientsMap;
}

@property (readonly) long long clockType;
@property (readonly) CMIOExtensionStreamCustomClockConfiguration *customClockConfiguration;
@property (readonly) long long direction;
@property (readonly, copy) NSString *localizedName;
@property (nonatomic) CMIOExtensionDevice *parent;
@property (readonly) <CMIOExtensionStreamSource> *source;
@property (readonly, copy) NSUUID *streamID;
@property (copy) NSArray *streamingClients;

+ (id)internalProperties;
+ (id)internalWritableProperties;
+ (id)streamWithLocalizedName:(id)arg1 streamID:(id)arg2 direction:(long long)arg3 clockType:(long long)arg4 source:(id)arg5;
+ (id)streamWithLocalizedName:(id)arg1 streamID:(id)arg2 direction:(long long)arg3 customClockConfiguration:(id)arg4 source:(id)arg5;

- (void).cxx_destruct;
- (void)_clientQueue_addStreamingClient:(id)arg1;
- (id)_clientQueue_internalPropertyStatesForProperties:(id)arg1;
- (void)_clientQueue_removeStreamingClient:(id)arg1;
- (id)_clientQueue_setAndRemoveInternalPropertyValuesForClient:(id)arg1 propertyValues:(id)arg2 error:(id*)arg3;
- (id)_clientQueue_streamingClientsMap;
- (id)_initWithLocalizedName:(id)arg1 streamID:(id)arg2 direction:(long long)arg3 clockType:(long long)arg4 customClockConfiguration:(id)arg5 source:(id)arg6;
- (void)clientQueue_updateMutableStreamPropertiesByPolicy;
- (long long)clockType;
- (void)consumeSampleBufferFromClient:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)customClockConfiguration;
- (void)dealloc;
- (id)description;
- (long long)direction;
- (void)enqueueReactionEffect:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithLocalizedName:(id)arg1 streamID:(id)arg2 direction:(long long)arg3 clockType:(long long)arg4 source:(id)arg5;
- (id)initWithLocalizedName:(id)arg1 streamID:(id)arg2 direction:(long long)arg3 customClockConfiguration:(id)arg4 source:(id)arg5;
- (id)localizedName;
- (void)notifyPropertiesChanged:(id)arg1;
- (void)notifyScheduledOutputChanged:(id)arg1;
- (id)parent;
- (void)sendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 discontinuity:(unsigned int)arg2 hostTimeInNanoseconds:(unsigned long long)arg3;
- (void)setParent:(id)arg1;
- (void)setStreamingClients:(id)arg1;
- (id)source;
- (id)streamID;
- (id)streamingClients;

@end

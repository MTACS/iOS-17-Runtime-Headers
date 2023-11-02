
@interface CMIOExtensionSessionStream : NSObject {
    unsigned long long  _activeFormatIndex;
    unsigned int  _activeFormatMediaType;
    NSSet * _availableProperties;
    long long  _clockType;
    CMIOExtensionStreamCustomClockConfiguration * _customClockConfiguration;
    <CMIOExtensionSessionStreamDelegate> * _delegate;
    NSString * _description;
    long long  _direction;
    NSArray * _formats;
    bool  _invalidated;
    NSString * _localizedName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _propertyStates;
    CMIOExtensionSessionProvider * _provider;
    NSUUID * _streamID;
    bool  _streaming;
}

@property (nonatomic) unsigned long long activeFormatIndex;
@property (nonatomic, readonly) unsigned int activeFormatMediaType;
@property (nonatomic, readonly, copy) NSSet *availableProperties;
@property (nonatomic, readonly) long long clockType;
@property (nonatomic, readonly, copy) CMIOExtensionStreamCustomClockConfiguration *customClockConfiguration;
@property (nonatomic) <CMIOExtensionSessionStreamDelegate> *delegate;
@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) NSArray *formats;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) CMIOExtensionSessionProvider *provider;
@property (nonatomic, readonly, copy) NSUUID *streamID;

+ (id)sessionStreamWithPropertyStates:(id)arg1 provider:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)activeFormatIndex;
- (unsigned int)activeFormatMediaType;
- (id)availableProperties;
- (id)cachedPropertyStateForProperty:(id)arg1;
- (id)cachedPropertyStatesForProperties:(id)arg1;
- (void)captureAsyncStillImage:(long long)arg1 options:(id)arg2 reply:(id /* block */)arg3;
- (long long)clockType;
- (void)completeTransaction;
- (id)copySample:(bool*)arg1 streamID:(id)arg2 error:(id*)arg3;
- (id)customClockConfiguration;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (long long)direction;
- (void)enqueueReactionEffect:(id)arg1 reply:(id /* block */)arg2;
- (id)formats;
- (id)initWithPropertyStates:(id)arg1 provider:(id)arg2;
- (bool)isInvalidated;
- (id)localizedName;
- (void)propertyStatesForProperties:(id)arg1 reply:(id /* block */)arg2;
- (id)provider;
- (void)receivedSample:(id)arg1 streamID:(id)arg2;
- (void)receivedScheduledOutput:(id)arg1 streamID:(id)arg2;
- (void)setActiveFormatIndex:(unsigned long long)arg1;
- (void)setActiveFormatIndex:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setPropertyValues:(id)arg1 reply:(id /* block */)arg2;
- (void)startStream:(id /* block */)arg1;
- (void)stopStream:(id /* block */)arg1;
- (id)streamID;
- (void)updatePropertyStates:(id)arg1 streamID:(id)arg2;

@end

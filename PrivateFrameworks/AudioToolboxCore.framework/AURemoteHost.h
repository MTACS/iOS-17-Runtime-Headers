
@interface AURemoteHost : NSObject <AUAudioUnitXPCProtocol> {
    AUAudioUnit * _audioUnit;
    NSUUID * _audioUnitUUID;
    AUParameterTree * _cachedParameterTree;
    struct AudioComponentDescription { 
        unsigned int componentType; 
        unsigned int componentSubType; 
        unsigned int componentManufacturer; 
        unsigned int componentFlags; 
        unsigned int componentFlagsMask; 
    }  _componentDescription;
    int  _deferPropertyChangeNotifications;
    NSObject<OS_voucher> * _initializationVoucher;
    struct KVOAggregator { 
        struct vector<KVOAggregator::Record, std::allocator<KVOAggregator::Record>> { 
            struct Record {} *__begin_; 
            struct Record {} *__end_; 
            struct __compressed_pair<KVOAggregator::Record *, std::allocator<KVOAggregator::Record>> { 
                struct Record {} *__value_; 
            } __end_cap_; 
        } mRecords; 
    }  _kvoAggregator;
    NSMutableArray * _pendingChangedProperties;
    NSObject<OS_dispatch_source> * _presetFolderWatcher;
    NSObject<OS_dispatch_queue> * _presetMonitoringQueue;
    NSObject<OS_dispatch_queue> * _propertyObserverQueue;
    NSXPCConnection * _remoteHostXPCConnection;
    /* Warning: unhandled struct encoding: '{vector<AURemoteMessageChannel *, std::allocator<AURemoteMessageChannel *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<AURemoteMessageChannel *__strong *, std::allocator<AURemoteMessageChannel *>>="__value_"^@}}' */ struct vector<AURemoteMessageChannel *, std::allocator<AURemoteMessageChannel *>> { 
        __end_ **__begin_; 
    }  _remoteMessageChannels;
    struct optional<AUOOPRenderingServerUser> { 
        union { 
            BOOL __null_state_; 
            struct AUOOPRenderingServerUser { 
                int (**_vptr$CAPrint)(); 
                unsigned int mSerialNum; 
                AUAudioUnit *mAUAudioUnit; 
                id /* block */ mRetainedRenderBlock; 
                id /* block */ mRenderBlock; 
                bool mCanProcessInPlace; 
                bool mIsV2AudioUnit; 
                long long mMIDIOutBaseSampleTime; 
                struct AUEventSchedule {} *mEventSchedule; 
                struct AUOOPSharedMemory {} *mSharedBuffers; 
                struct optional<std::__thread_id> { 
                    union { 
                        BOOL __null_state_; 
                        struct __thread_id { 
                            struct _opaque_pthread_t {} *__id_; 
                        } __val_; 
                    } ; 
                    bool __engaged_; 
                } mRenderThreadId; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _renderServerUser;
    struct reply_watchdog_factory { 
        bool mDebugging; 
        int mDefaultTimeoutMS; 
        struct function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C] {} mTimeoutHandler; 
        void *__f_; 
    }  _replyWatchdogFactory;
    NSMutableArray * _userPresets;
    struct shared_ptr<auoop::WorkgroupMirror> { 
        struct WorkgroupMirror {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _workgroupMirror;
}

@property (nonatomic, readonly) NSUUID *audioUnitUUID;
@property (nonatomic, readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } componentDescription;
@property (nonatomic) int deferPropertyChangeNotifications;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } hostAuditToken;
@property (nonatomic, readonly) NSMutableArray *pendingChangedProperties;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyObserverQueue;

+ (void)_staticInit;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_fetchAndClearPendingChangedProperties;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id*)arg3;
- (id)_getSpeechSynthesisProviderAudioUnit;
- (bool)_identifyBus:(id)arg1 scope:(unsigned int*)arg2 element:(unsigned int*)arg3;
- (void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (id)audioUnit;
- (id)audioUnitUUID;
- (void)cancelSpeechRequest:(id /* block */)arg1;
- (void)close:(id /* block */)arg1;
- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })componentDescription;
- (void)createRenderPipe:(int)arg1 formats:(id)arg2 maxFrames:(unsigned int)arg3 midiOutSizeHint:(unsigned int)arg4 resources:(id)arg5 reply:(id /* block */)arg6;
- (id)currentParameterTree;
- (void)dealloc;
- (int)deferPropertyChangeNotifications;
- (void)deleteUserPreset:(id)arg1 reply:(id /* block */)arg2;
- (void)destroyRenderPipe:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(id /* block */)arg4;
- (void)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(id /* block */)arg4;
- (void)getBusses:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)getCustomMessageChannelFor:(id)arg1 reply:(id /* block */)arg2;
- (void)getParameter:(unsigned long long)arg1 sequenceNumber:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)getParameterTree:(id /* block */)arg1;
- (void)getSpeechVoices:(id /* block */)arg1;
- (struct { unsigned int x1[8]; })hostAuditToken;
- (id)initWithInputItems:(id)arg1 xpcConnection:(id)arg2;
- (id)initWithInputItems:(id)arg1 xpcConnection:(id)arg2 timeOutHandler:(struct function<void ()>={__value_func<void ()>={type=[24C] {})arg3;
- (id)initWithInputItems_internal:(id)arg1 xpcConnection:(id)arg2;
- (void)initialize:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)loadUserPresets:(id /* block */)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)open:(id /* block */)arg1;
- (void)openImpl:(id)arg1 reply:(id /* block */)arg2;
- (void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(id /* block */)arg3;
- (void)parameterStringFromValue:(float)arg1 currentValue:(bool)arg2 address:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(id /* block */)arg2;
- (id)pendingChangedProperties;
- (void)presetStateFor:(id)arg1 reply:(id /* block */)arg2;
- (void)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 reply:(id /* block */)arg3;
- (id)propertyObserverQueue;
- (id)readHostEntitlement:(id)arg1;
- (void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)reset:(id /* block */)arg1;
- (void)saveUserPreset:(id)arg1 state:(id)arg2 reply:(id /* block */)arg3;
- (void)selectViewConfiguration:(id)arg1 reply:(id /* block */)arg2;
- (void)setBlocks;
- (void)setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(id)arg3 reply:(id /* block */)arg4;
- (void)setBusName:(unsigned int)arg1 scope:(unsigned int)arg2 name:(id)arg3 reply:(id /* block */)arg4;
- (void)setDeferPropertyChangeNotifications:(int)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 reply:(id /* block */)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2 propagateError:(bool)arg3 reply:(id /* block */)arg4;
- (void)startUserPresetFolderMonitoring;
- (void)supportedViewConfigurations:(id)arg1 reply:(id /* block */)arg2;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)synthesizeSpeechRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)uninitialize:(id /* block */)arg1;
- (void)updateHostCallbacks:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)updateWorkgroupMirror:(id)arg1 reply:(id /* block */)arg2;
- (void)valueForKey:(id)arg1 reply:(id /* block */)arg2;
- (void)valueForProperty:(id)arg1 propagateError:(bool)arg2 reply:(id /* block */)arg3;

@end


@interface AUAudioUnit : NSObject {
    int  _AudioUnitMIDIProtocol;
    long long  _MIDIOutputBufferSizeHint;
    id /* block */  _MIDIOutputEventBlock;
    id /* block */  _MIDIOutputEventHostBlock;
    id /* block */  _MIDIOutputEventListBlock;
    id /* block */  _MIDIOutputEventListHostBlock;
    bool  _allParameterValues;
    NSString * _audioUnitShortName;
    UIViewController * _cachedViewController;
    bool  _canProcessInPlace;
    NSArray * _channelMap;
    struct weak_ptr<APComponent> { 
        struct APComponent {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _component;
    struct AudioComponentDescription { 
        unsigned int componentType; 
        unsigned int componentSubType; 
        unsigned int componentManufacturer; 
        unsigned int componentFlags; 
        unsigned int componentFlagsMask; 
    }  _componentDescription;
    NSString * _componentName;
    unsigned int  _componentVersion;
    NSString * _contextName;
    AUAudioUnitPreset * _currentPreset;
    NSArray * _factoryPresets;
    int  _hostMIDIProtocol;
    bool  _isLoadedInProcess;
    double  _latency;
    unsigned int  _maximumFramesToRender;
    NSArray * _migrateFromPlugin;
    id /* block */  _musicalContextBlock;
    AUParameterTree * _parameterTree;
    NSObject<OS_dispatch_source> * _presetFolderWatcher;
    NSObject<OS_dispatch_queue> * _presetMonitoringQueue;
    id /* block */  _profileChangedBlock;
    struct RealtimeState { 
        struct pooled_semaphore_mutex { 
            struct atomic<caulk::pooled_semaphore_mutex::CountAndSema> { 
                struct __cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>> { 
                    _Atomic struct CountAndSema {} __a_value; 
                } __a_; 
            } mCountAndSema; 
        } mMultipleRenderMutex; 
        struct pooled_semaphore_mutex { 
            struct atomic<caulk::pooled_semaphore_mutex::CountAndSema> { 
                struct __cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>> { 
                    _Atomic struct CountAndSema {} __a_value; 
                } __a_; 
            } mCountAndSema; 
        } mResetVsRenderMutex; 
        struct RenderObserverList { 
            struct TThreadSafeList<RenderObserver> { 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mActiveList; 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mPendingList; 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mFreeList; 
            } mObservers; 
            bool mTouched; 
        } renderObserverList; 
        struct AUEventSchedule { 
            struct AUv2GetParameterSynchronizer {} *mAUv2GetParameterSynchronizer; 
            struct AURenderEventAllocator {} *mAllocator; 
            struct AUScheduledParameterRefresher2 {} *mScheduledParameterRefresher; 
            struct lf_mpsc_queue<AURenderEventNode, caulk::concurrent::intrusive_single_link_member<AURenderEventNode, &AURenderEventNode::next>, true> { 
                struct atomic<AURenderEventNode *> { 
                    struct __cxx_atomic_impl<AURenderEventNode *, std::__cxx_atomic_base_impl<AURenderEventNode *>> { 
                        _Atomic struct AURenderEventNode {} *__a_value; 
                    } __a_; 
                } mEnqueueHead; 
                struct prepadded_t<AURenderEventNode *, 56UL> { 
                    unsigned char padding[56]; 
                    struct AURenderEventNode {} *value; 
                } mDequeueHead; 
            } mAddedEventQueue; 
            struct atomic<bool> { 
                struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
                    _Atomic bool __a_value; 
                } __a_; 
            } mHavePendingSetParameter; 
            union { _Atomic /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_0_2_1; byref void*x_0_2_2; in double x_0_2_3; void*x_0_2_4; const void*x_0_2_5; void x_0_2_6; void*x_0_2_7; in void*x_0_2_8; } *mScheduleHead; 
            void *mOwningAU; 
            id /* block */ mRenderBlock; 
            struct PreviousRenderTime { 
                double mSampleRate; 
                struct atomic<PreviousRenderTime::Snapshot> { 
                    struct __cxx_atomic_impl<PreviousRenderTime::Snapshot, std::__cxx_atomic_base_impl<PreviousRenderTime::Snapshot>> { 
                        _Atomic struct Snapshot {} __a_value; 
                    } __a_; 
                } mLastRender; 
            } mPreviousRenderTime; 
        } eventSchedule; 
        struct AUv2GetParameterSynchronizer { 
            struct atomic<AUv2GetParameterSynchronizer::SeqNumPair> { 
                struct __cxx_atomic_impl<AUv2GetParameterSynchronizer::SeqNumPair, std::__cxx_atomic_base_impl<AUv2GetParameterSynchronizer::SeqNumPair>> { 
                    _Atomic struct SeqNumPair {} __a_value; 
                } __a_; 
            } mSeqNums; 
            struct semaphore { 
                struct semaphore { 
                    unsigned int mMachSem; 
                    bool mOwned; 
                } mImpl; 
                struct atomic<int> { 
                    struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
                        _Atomic int __a_value; 
                    } __a_; 
                } mCounter; 
                int mOriginalCounter; 
            } mSyncGetParamSema; 
        } auv2GetParameterSynchronizer; 
        struct optional<RenderContextChangeGenerator> { 
            union { 
                BOOL __null_state_; 
                struct RenderContextChangeGenerator { 
                    void *mLastWorkgroup; 
                    id /* block */ mObserver; 
                } __val_; 
            } ; 
            bool __engaged_; 
        } contextChangeGenerator; 
        int renderBlockType; 
        int cachedMIDIProtocol; 
    }  _realtimeState;
    long long  _renderQuality;
    bool  _renderResourcesAllocated;
    bool  _renderingOffline;
    bool  _requestViewControllerSynchronously;
    bool  _shouldBypassEffect;
    bool  _shouldUseMIDI2;
    bool  _supportsMPE;
    double  _tailTime;
    id /* block */  _transportStateBlock;
    NSMutableArray * _userPresets;
    long long  _virtualMIDICableCount;
}

@property (nonatomic, readonly) int AudioUnitMIDIProtocol;
@property (nonatomic) long long MIDIOutputBufferSizeHint;
@property (nonatomic, copy) id /* block */ MIDIOutputEventBlock;
@property (nonatomic, copy) id /* block */ MIDIOutputEventListBlock;
@property (nonatomic, readonly, copy) NSArray *MIDIOutputNames;
@property (nonatomic, readonly) bool allParameterValues;
@property (nonatomic, readonly, copy) NSString *audioUnitName;
@property (nonatomic, readonly, copy) NSString *audioUnitShortName;
@property (nonatomic, readonly) bool canProcessInPlace;
@property (nonatomic, readonly, copy) NSArray *channelCapabilities;
@property (nonatomic, copy) NSArray *channelMap;
@property (nonatomic, readonly) struct OpaqueAudioComponent { }*component;
@property (nonatomic, readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } componentDescription;
@property (nonatomic, readonly, copy) NSString *componentName;
@property (nonatomic, readonly) unsigned int componentVersion;
@property (nonatomic, copy) NSString *contextName;
@property (nonatomic, retain) AUAudioUnitPreset *currentPreset;
@property (nonatomic, readonly, copy) NSArray *factoryPresets;
@property (nonatomic, copy) NSDictionary *fullState;
@property (nonatomic, copy) NSDictionary *fullStateForDocument;
@property (nonatomic) int hostMIDIProtocol;
@property (nonatomic, readonly) AUAudioUnitBusArray *inputBusses;
@property (nonatomic, readonly) id /* block */ internalRenderBlock;
@property (nonatomic, readonly) bool isLoadedInProcess;
@property (nonatomic, readonly) double latency;
@property (nonatomic, readonly, copy) NSString *manufacturerName;
@property (nonatomic) unsigned int maximumFramesToRender;
@property (nonatomic, readonly) NSArray *migrateFromPlugin;
@property (getter=isMusicDeviceOrEffect, nonatomic, readonly) bool musicDeviceOrEffect;
@property (nonatomic, copy) id /* block */ musicalContextBlock;
@property (nonatomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (nonatomic, retain) AUParameterTree *parameterTree;
@property (nonatomic, copy) id /* block */ profileChangedBlock;
@property (nonatomic, readonly) bool providesUserInterface;
@property (nonatomic, readonly) id /* block */ renderBlock;
@property (nonatomic, readonly) id /* block */ renderContextObserver;
@property (nonatomic) long long renderQuality;
@property (nonatomic, readonly) bool renderResourcesAllocated;
@property (getter=isRenderingOffline, nonatomic) bool renderingOffline;
@property (nonatomic) bool requestViewControllerSynchronously;
@property (nonatomic, readonly) id /* block */ scheduleMIDIEventBlock;
@property (nonatomic, readonly) id /* block */ scheduleMIDIEventListBlock;
@property (nonatomic, readonly) id /* block */ scheduleParameterBlock;
@property (nonatomic) bool shouldBypassEffect;
@property (nonatomic, readonly) bool supportsMPE;
@property (nonatomic, readonly) bool supportsUserPresets;
@property (nonatomic, readonly) double tailTime;
@property (nonatomic, copy) id /* block */ transportStateBlock;
@property (nonatomic, readonly, copy) NSArray *userPresets;
@property (nonatomic, readonly) long long virtualMIDICableCount;

+ (id)__presetFromPath:(id)arg1;
+ (id)__sanitizeFileName:(id)arg1;
+ (void)__sanitizePresetNumber:(id)arg1;
+ (id)__userPresetPath:(id)arg1 error:(id*)arg2;
+ (bool)_deleteUserPreset:(id)arg1 error:(id*)arg2;
+ (void)_loadUserPresets:(id)arg1 error:(id*)arg2;
+ (id)_monitorUserPresets:(id)arg1 callback:(id /* block */)arg2;
+ (id)_presetStateFor:(id)arg1 error:(id*)arg2;
+ (bool)_saveUserPreset:(id)arg1 state:(id)arg2 error:(id*)arg3;
+ (id)auAudioUnitForAudioUnit:(struct OpaqueAudioComponentInstance { }*)arg1;
+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 connectionProvider:(struct function<NSXPCConnection *(NSUUID *)>={__value_func<NSXPCConnection *(NSUUID *)>={type=[24C] {})arg3 completionHandler:(id /* block */)arg4;
+ (id)keyPathsForValuesAffectingAllParameterValues;
+ (void)registerSubclass:(Class)arg1 asComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 name:(id)arg3 version:(unsigned int)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)AudioUnitMIDIProtocol;
- (long long)MIDIOutputBufferSizeHint;
- (id /* block */)MIDIOutputEventBlock;
- (id /* block */)MIDIOutputEventListBlock;
- (id)MIDIOutputNames;
- (void)_setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)_valueForProperty:(id)arg1 error:(id*)arg2;
- (void)addRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (bool)allParameterValues;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (id)audioUnitName;
- (id)audioUnitShortName;
- (void*)auv2GetParameterSynchronizer;
- (id)cachedViewController;
- (bool)canProcessInPlace;
- (id)channelCapabilities;
- (id)channelMap;
- (struct OpaqueAudioComponent { }*)component;
- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })componentDescription;
- (id)componentName;
- (unsigned int)componentVersion;
- (id)contextName;
- (id)currentPreset;
- (void)dealloc;
- (void)deallocateRenderResources;
- (bool)deleteUserPreset:(id)arg1 error:(id*)arg2;
- (void)deliverV2Parameters:(const union AURenderEvent { struct AURenderEventHeader { union { _Atomic /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_1_2_1; byref void*x_1_2_2; in double x_1_2_3; void*x_1_2_4; const void*x_1_2_5; void x_1_2_6; void*x_1_2_7; in void*x_1_2_8; } *x_1_1_1; long long x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; } x1; struct AUParameterEvent { union { _Atomic void*x_1_2_1; byref void*x_1_2_2; in double x_1_2_3; void*x_1_2_4; const void*x_1_2_5; void x_1_2_6; void*x_1_2_7; in void*x_1_2_8; } *x_2_1_1; long long x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4[3]; unsigned int x_2_1_5; unsigned long long x_2_1_6; float x_2_1_7; } x2; struct AUMIDIEvent { union { _Atomic void*x_1_2_1; byref void*x_1_2_2; in double x_1_2_3; void*x_1_2_4; const void*x_1_2_5; void x_1_2_6; void*x_1_2_7; in void*x_1_2_8; } *x_3_1_1; long long x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned short x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7[3]; } x3; struct AUMIDIEventList { union { _Atomic void*x_1_2_1; byref void*x_1_2_2; in double x_1_2_3; void*x_1_2_4; const void*x_1_2_5; void x_1_2_6; void*x_1_2_7; in void*x_1_2_8; } *x_4_1_1; long long x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; unsigned char x_4_1_5; struct MIDIEventList { int x_6_2_1; unsigned int x_6_2_2; struct MIDIEventPacket { unsigned long long x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3[64]; } x_6_2_3[1]; } x_4_1_6; } x4; }*)arg1;
- (bool)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4;
- (bool)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4;
- (void*)eventSchedule;
- (id)factoryPresets;
- (void)flushEventSchedule;
- (id)fullState;
- (id)fullStateForDocument;
- (float)getV2Parameter:(unsigned long long)arg1 sequenceNumber:(unsigned int)arg2;
- (int)hostMIDIProtocol;
- (id)init;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 error:(id*)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (void)internalDeallocateRenderResources;
- (id /* block */)internalRenderBlock;
- (void)invalidateAudioUnit;
- (bool)isLoadedInProcess;
- (bool)isMusicDeviceOrEffect;
- (bool)isRenderingOffline;
- (bool)isSpeechSynthesisProvider;
- (double)latency;
- (id)manufacturerName;
- (unsigned int)maximumFramesToRender;
- (id)messageChannelFor:(id)arg1;
- (id)migrateFromPlugin;
- (id /* block */)musicalContextBlock;
- (id)osWorkgroup;
- (id)outputBusses;
- (id)parameterTree;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (id)presetStateFor:(id)arg1 error:(id*)arg2;
- (id /* block */)profileChangedBlock;
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;
- (bool)providesUserInterface;
- (struct { unsigned int x1[8]; })remoteProcessAuditToken;
- (int)remoteProcessIdentifier;
- (void)removeRenderObserver:(long long)arg1;
- (void)removeRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (id /* block */)renderBlock;
- (id /* block */)renderContextObserver;
- (long long)renderQuality;
- (bool)renderResourcesAllocated;
- (bool)requestViewControllerSynchronously;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (void)resolveComponent;
- (bool)saveUserPreset:(id)arg1 error:(id*)arg2;
- (id /* block */)scheduleMIDIEventBlock;
- (id /* block */)scheduleMIDIEventListBlock;
- (id /* block */)scheduleParameterBlock;
- (void*)scheduledParameterRefresher;
- (void)selectViewConfiguration:(id)arg1;
- (void)setCachedViewController:(id)arg1;
- (void)setChannelMap:(id)arg1;
- (void)setContextName:(id)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setFullState:(id)arg1;
- (void)setFullStateForDocument:(id)arg1;
- (void)setHostMIDIProtocol:(int)arg1;
- (void)setLoadedOutOfProcess;
- (void)setMIDIOutputBufferSizeHint:(long long)arg1;
- (void)setMIDIOutputEventBlock:(id /* block */)arg1;
- (void)setMIDIOutputEventListBlock:(id /* block */)arg1;
- (void)setMaximumFramesToRender:(unsigned int)arg1;
- (void)setMusicalContextBlock:(id /* block */)arg1;
- (void)setParameterTree:(id)arg1;
- (void)setProfileChangedBlock:(id /* block */)arg1;
- (void)setRenderQuality:(long long)arg1;
- (void)setRenderResourcesAllocated:(bool)arg1;
- (void)setRenderingOffline:(bool)arg1;
- (void)setRequestViewControllerSynchronously:(bool)arg1;
- (void)setShouldBypassEffect:(bool)arg1;
- (void)setTransportStateBlock:(id /* block */)arg1;
- (void)setV2Parameter:(unsigned long long)arg1 value:(float)arg2 bufferOffset:(unsigned int)arg3 sequenceNumber:(unsigned int)arg4;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setupMIDIConversion;
- (bool)shouldBypassEffect;
- (bool)shouldChangeToFormat:(id)arg1 forBus:(id)arg2;
- (void)startUserPresetFolderMonitoring;
- (id)supportedViewConfigurations:(id)arg1;
- (bool)supportsMPE;
- (bool)supportsUserPresets;
- (double)tailTime;
- (void)tearDownExtension;
- (long long)tokenByAddingRenderObserver:(id /* block */)arg1;
- (id /* block */)transportStateBlock;
- (id)userPresets;
- (id)valueForUndefinedKey:(id)arg1;
- (long long)virtualMIDICableCount;

@end


@interface ASDDSPStream : ASDStream {
    NSString * _DSPCaptureDirectory;
    long long  _DSPCaptureType;
    void * _bufferOfZeroes;
    unsigned int  _bufferOfZeroesSizeBytes;
    unsigned int  _bufferOfZeroesSizeSamples;
    struct unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> { 
        struct __compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> { 
            void *__value_; 
        } __ptr_; 
    }  _clientToGraphMap;
    ASDStreamDSPConfiguration * _currentDSPConfiguration;
    NSUserDefaults * _defaults;
    NSObject<OS_dispatch_queue> * _dspQueue;
    long long  _graphAudioValidationMode;
    struct list<ASDDSPGraphHelper, std::allocator<ASDDSPGraphHelper>> { 
        struct __list_node_base<ASDDSPGraphHelper, void *> { 
            void *__prev_; 
            void *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::allocator<std::__list_node<ASDDSPGraphHelper, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _graphHelpers;
    long long  _ioReferenceCount;
    bool  _isRunning;
    bool  _keepGraphInitialized;
    unsigned int  _lastIoBufferFrameSizeSamples;
    unsigned long long  _lastIoBufferWriteTime;
    struct AudioServerPlugInIOCycleInfo { 
        unsigned long long mIOCycleCounter; 
        unsigned int mNominalIOBufferFrameSize; 
        struct AudioTimeStamp { 
            double mSampleTime; 
            unsigned long long mHostTime; 
            double mRateScalar; 
            unsigned long long mWordClockTime; 
            struct SMPTETime { 
                short mSubframes; 
                short mSubframeDivisor; 
                unsigned int mCounter; 
                unsigned int mType; 
                unsigned int mFlags; 
                short mHours; 
                short mMinutes; 
                short mSeconds; 
                short mFrames; 
            } mSMPTETime; 
            unsigned int mFlags; 
            unsigned int mReserved; 
        } mCurrentTime; 
        struct AudioTimeStamp { 
            double mSampleTime; 
            unsigned long long mHostTime; 
            double mRateScalar; 
            unsigned long long mWordClockTime; 
            struct SMPTETime { 
                short mSubframes; 
                short mSubframeDivisor; 
                unsigned int mCounter; 
                unsigned int mType; 
                unsigned int mFlags; 
                short mHours; 
                short mMinutes; 
                short mSeconds; 
                short mFrames; 
            } mSMPTETime; 
            unsigned int mFlags; 
            unsigned int mReserved; 
        } mInputTime; 
        struct AudioTimeStamp { 
            double mSampleTime; 
            unsigned long long mHostTime; 
            double mRateScalar; 
            unsigned long long mWordClockTime; 
            struct SMPTETime { 
                short mSubframes; 
                short mSubframeDivisor; 
                unsigned int mCounter; 
                unsigned int mType; 
                unsigned int mFlags; 
                short mHours; 
                short mMinutes; 
                short mSeconds; 
                short mFrames; 
            } mSMPTETime; 
            unsigned int mFlags; 
            unsigned int mReserved; 
        } mOutputTime; 
        union { 
            double mMainHostTicksPerFrame; 
            double mMasterHostTicksPerFrame; 
        } ; 
        double mDeviceHostTicksPerFrame; 
    }  _lastIoCycleInfo;
    long long  _maximumFramesPerIOCycle;
    ASDAudioDevice * _owningDevice;
    bool  _processGraphOutputTailOnStop;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    struct unique_ptr<ASDDSPStreamHelper, std::default_delete<ASDDSPStreamHelper>> { 
        struct __compressed_pair<ASDDSPStreamHelper *, std::default_delete<ASDDSPStreamHelper>> { 
            struct ASDDSPStreamHelper {} *__value_; 
        } __ptr_; 
    }  _streamHelper;
    unsigned int  _tailMuteAUGraphParamID;
    unsigned int  _tailProcessingLengthInMs;
    unsigned long long  _underlyingInputStreamCount;
    unsigned long long  _underlyingOutputStreamCount;
    NSArray * _underlyingStreams;
    NSObject<OS_dispatch_source> * mHUPSource;
}

@property (nonatomic, retain) ASDStreamDSPConfiguration *currentDSPConfiguration;
@property (nonatomic) long long graphAudioValidationMode;
@property (nonatomic, readonly) ASDDSPGraph *hardwareDSP;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic) bool keepGraphInitialized;
@property (nonatomic, readonly) long long maximumFramesPerIOCycle;
@property (nonatomic) bool processGraphOutputTailOnStop;
@property (nonatomic) unsigned long long underlyingInputStreamCount;
@property (nonatomic) unsigned long long underlyingOutputStreamCount;
@property (nonatomic, copy) NSArray *underlyingStreams;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_allocateStreamingResources;
- (void)_allocateStreamingResourcesForGraphHelper:(void*)arg1;
- (void)_deallocateStreamingResources;
- (id)_hardwareDSP;
- (void)_resumeProcessing;
- (void)_suspendProcessing;
- (void)_updateLatency;
- (void)_updateMaximumFramesPerIOCycle;
- (bool)addClientDSP:(id)arg1 forClient:(unsigned int)arg2;
- (bool)addClientDSP:(id)arg1 withKey:(unsigned long long)arg2;
- (bool)addHardwareDSP:(id)arg1;
- (bool)changePhysicalFormat:(id)arg1;
- (id)clientDSPForClient:(unsigned int)arg1;
- (id)currentDSPConfiguration;
- (void)dealloc;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (void)disableMuteOnStop;
- (void)doSetUnderlyingStreams:(id)arg1;
- (id)driverClassName;
- (bool)enableBasicDSPCaptureOnGraph:(id)arg1 withLevel:(id)arg2 andDebugType:(long long)arg3;
- (bool)enableBasicDSPCaptureOnGraph:(id)arg1 withLevel:(id)arg2 andDebugType:(long long)arg3 andMode:(long long)arg4;
- (void)enableDSPCaptureByType:(long long)arg1 withGraph:(id)arg2;
- (void)enableDSPCaptureInAction;
- (void)enableDSPFileInjectionOnGraph:(id)arg1 withFormat:(id)arg2;
- (void)enableMuteOnStopUsingParam:(unsigned int)arg1 duration:(unsigned int)arg2;
- (id)getASDAudioDefaultsPath;
- (long long)getAudioCaptureRingBufferModeWithDict:(id)arg1;
- (long long)getAudioDebugTypeWithDict:(id)arg1;
- (id)getDSPCaptureDirectory;
- (long long)getDSPCaptureTypeFromDefault;
- (long long)graphAudioValidationMode;
- (bool)graphStructureIsValid:(id)arg1 clientID:(unsigned long long)arg2;
- (id)hardwareDSP;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;
- (id)initWithOwningDevice:(id)arg1 underlyingStreams:(id)arg2 direction:(unsigned int)arg3 plugin:(id)arg4;
- (bool)isRunning;
- (bool)keepGraphInitialized;
- (long long)maximumFramesPerIOCycle;
- (bool)processGraphOutputTailOnStop;
- (id /* block */)processOutputBlock;
- (id /* block */)readInputBlock;
- (bool)removeClientDSPForClient:(unsigned int)arg1;
- (bool)removeClientDSPwithKey:(unsigned long long)arg1;
- (bool)removeHardwareDSP;
- (void)resumeProcessing;
- (void)setCurrentDSPConfiguration:(id)arg1;
- (void)setGraphAudioValidationMode:(long long)arg1;
- (void)setKeepGraphInitialized:(bool)arg1;
- (void)setProcessGraphOutputTailOnStop:(bool)arg1;
- (void)setUnderlyingInputStreamCount:(unsigned long long)arg1;
- (void)setUnderlyingOutputStreamCount:(unsigned long long)arg1;
- (void)setUnderlyingStreams:(id)arg1;
- (void)sleepForNumberOfSamples:(unsigned long long)arg1;
- (void)startStream;
- (void)stopStream;
- (void)suspendProcessing;
- (unsigned long long)underlyingInputStreamCount;
- (unsigned long long)underlyingOutputStreamCount;
- (id)underlyingStreams;
- (void)updateLatency;
- (id /* block */)writeMixBlock;

@end

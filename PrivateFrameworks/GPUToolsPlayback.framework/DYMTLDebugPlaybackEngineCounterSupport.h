
@interface DYMTLDebugPlaybackEngineCounterSupport : NSObject {
    struct vector<unsigned long long, std::allocator<unsigned long long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _commandBufferFrameProfiles;
    struct vector<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>, std::allocator<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> *, std::allocator<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _commandBufferFrameProfilesInfo;
    struct vector<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>, std::allocator<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> *, std::allocator<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _commandBufferFrameProfilesPerDMDrawCallInfo;
    DYPlaybackEngine * _engine;
    NSMutableDictionary * _frameProfiling;
    bool  _isAGXDevice;
    unsigned int  _loopCount;
    bool  _needsMultiplePasses;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_FixSplitEncoderSamples:(void*)arg1 forProfile:(const void*)arg2 withInfo:(id)arg3 andUpdatedCounterInfo:(id)arg4;
- (void)_clearData;
- (bool)_computeAverageForFrameProfile:(void*)arg1 forProfile:(const void*)arg2 withInfo:(id)arg3 andUpdatedCounterInfo:(id)arg4 forEncoders:(bool)arg5;
- (unsigned long long)_profileFrameForFrameTiming:(id)arg1 atConsistentState:(unsigned int)arg2;
- (id)_profileFrameWithCounterListsForProfileInfo:(id)arg1;
- (id)_profileFrameWithCounterListsForProfileInfo:(id)arg1 encoderPass:(bool)arg2;
- (id)_profileFrameWithCounterListsForProfileInfo:(id)arg1 setConsistentState:(unsigned int)arg2;
- (id)_profileFrameWithCounterListsForProfileInfoAsync:(id)arg1 encoderPass:(bool)arg2 updateStatSampling:(bool)arg3 setConsistentState:(unsigned int)arg4;
- (id)_profileSplitEncodersForProfileInfo:(id)arg1;
- (id)_runPassesForCounterLists:(id)arg1 encoderPass:(bool)arg2 frameProfileInfo:(void*)arg3;
- (void)_setupPState;
- (id)_updatedBatchInfos:(id)arg1 fromPerEncoderDrawCallCount:(id)arg2;
- (void)addCommandBufferFrameProfile:(const void*)arg1;
- (void)addCounters:(id)arg1;
- (id)availableCounters;
- (void)createBatchIdFilterMapping;
- (id)derivedCounterData;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)profileEncodersForProfileInfo:(id)arg1;
- (id)profileFrameWithCounterListsForProfileInfo:(id)arg1;
- (id)profileFrameWithCounterListsForProfileInfoAsync:(id)arg1;
- (id)profileFrameWithPayload:(id)arg1;

@end

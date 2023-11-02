
@interface PVLivePlayer : NSObject {
    unsigned int  _activeRenderLinkJobCount;
    bool  _bypassRenderLink;
    _Atomic unsigned int  _frameCount;
    double  _lastCompletedHostTime;
    struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> { 
        struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> { 
            struct PVGCDLock {} *__value_; 
        } __ptr_; 
    }  _lock;
    bool  _lowerGCDPriority;
    bool  _lowerGPUPriority;
    NSString * _name;
    _Atomic unsigned int  _parentCode;
    struct unique_ptr<PVPerfStats, std::default_delete<PVPerfStats>> { 
        struct __compressed_pair<PVPerfStats *, std::default_delete<PVPerfStats>> { 
            struct PVPerfStats {} *__value_; 
        } __ptr_; 
    }  _perfStats;
    struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> { 
        struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> { 
            struct PVGCDLock {} *__value_; 
        } __ptr_; 
    }  _perfStatsLock;
    struct HGRef<HGRenderQueue> { 
        struct HGRenderQueue {} *m_Obj; 
    }  _playerQueue;
    unsigned int  _playerQueueUnitCount;
    _Atomic int  _playerStatus;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousSignalTime;
    bool  _previousSignalTimeValid;
    PVLivePlayer * _primaryPlayer;
    _Atomic unsigned int  _queueSize;
    PVLivePlayerRenderLink * _renderLink;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderTime;
    PVRenderer * _renderer;
    struct map<unsigned int, id<PVLivePlayerSource>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, id<PVLivePlayerSource>>>> { 
        struct __tree<std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, id<PVLivePlayerSource>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, id<PVLivePlayerSource>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _sourceMap;
    struct unique_ptr<PerfTimer, std::default_delete<PerfTimer>> { 
        struct __compressed_pair<PerfTimer *, std::default_delete<PerfTimer>> { 
            struct PerfTimer {} *__value_; 
        } __ptr_; 
    }  _statLogTimer;
    PVLivePlayerThermalThrottlingPolicy * _thermalThrottlingPolicy;
    PVTaskTokenPool * _tokenPool;
    bool  _trackStats;
    <PVLivePlayerDelegate> * _weakDelegate;
}

@property (nonatomic) bool bypassRenderLink;
@property (nonatomic) bool lowerGCDPriority;
@property (nonatomic) bool lowerGPUPriority;
@property (nonatomic, retain) PVColorSpace *outputColorSpace;
@property (nonatomic) unsigned int queueSize;
@property (nonatomic, retain) PVLivePlayerRenderLink *renderLink;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } renderTime;
@property (nonatomic, readonly) int status;
@property (nonatomic, retain) PVLivePlayerThermalThrottlingPolicy *thermalThrottlingPolicy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_dropFrameForFullQueue;
- (bool)_dropFrameForSaturatedPrimaryPlayer;
- (void)_notifyDelegateOfDroppedFrame:(int)arg1;
- (void)_renderLinkSignal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_statsLogCheck;
- (unsigned int)_throttledQueueSize_NoLock;
- (void)addStats:(const void*)arg1;
- (bool)bypassRenderLink;
- (void)bypassRenderLink:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (void)dealloc;
- (void)flush;
- (unsigned long long)getPackedFamilyCode:(unsigned int)arg1;
- (id)getTaskToken;
- (double)getWindowedFPS;
- (void)handleRenderLinkJob:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (bool)lowerGCDPriority;
- (bool)lowerGPUPriority;
- (id)outputColorSpace;
- (id)playerSources;
- (void)printAndClearStats:(bool)arg1;
- (unsigned int)queueSize;
- (id)readSourceFrameSets:(double)arg1;
- (id)renderLink;
- (void)renderLinkJobFinished:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (void)renderLinkSignal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)renderLinkSignalDropped;
- (void)renderLinkSignalSkipped;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })renderTime;
- (void)resetRenderTime;
- (void)setBypassRenderLink:(bool)arg1;
- (void)setLowerGCDPriority:(bool)arg1;
- (void)setLowerGPUPriority:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOutputColorSpace:(id)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)setPrimaryPlayer:(id)arg1;
- (void)setQueueSize:(unsigned int)arg1;
- (void)setRenderLink:(id)arg1;
- (void)setSource:(id)arg1 inputID:(unsigned int)arg2;
- (void)setStatus:(int)arg1;
- (void)setThermalThrottlingPolicy:(id)arg1;
- (void)shutdown;
- (void)start;
- (int)status;
- (void)stop;
- (bool)testOutOfOrderCompletion:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (id)thermalThrottlingPolicy;
- (bool)throttledBypassRenderLink;
- (void)trackStats:(bool)arg1;
- (void)updateRenderQueueUnits;

@end

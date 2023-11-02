
@interface PVEffectScheduler : NSObject {
    struct HGRef<PVInstructionGraphContext> { 
        struct PVInstructionGraphContext {} *m_Obj; 
    }  _effectLoadRenderContext;
    struct set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>> { 
        struct __tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<HGRef<LoadableInstruction>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, LoadableInstructionCompare> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _effectSchedule;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _effectScheduleLock;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _endTime;
    bool  _isExporting;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _isScheduling;
    struct __tree_const_iterator<HGRef<LoadableInstruction>, std::__tree_node<HGRef<LoadableInstruction>, void *> *, long> { 
        void *__ptr_; 
    }  _lastLoadedEffectSetIterator;
    NSObject<OS_dispatch_queue> * _loadQueue;
    bool  _loadedFinalInstructions;
    struct set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>> { 
        struct __tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<HGRef<LoadableInstruction>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, LoadableInstructionCompare> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _previousScheduleToUnload;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)loadEffects:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 playerRate:(float)arg2;
- (bool)loadTimeIsNearEnd:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)previousLoadedIteratorIsLastInList;
- (void)releaseAllUnusedEffects:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)resetSchedule:(id)arg1;
- (void)resetSearchPoint;
- (void)setEffectLoadingRenderContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (void)setIsExporting:(bool)arg1;
- (void)unloadInstructionFromPreviousSchedule;

@end


@interface ExternalStreamManager : NSObject {
    unsigned long long  _controllerPauseStateCallbackCounter;
    struct unordered_map<unsigned long long, void (^)(NSUUID *, NSUUID *, bool), std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>>="__table_"{__hash_table<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>="__value_"Q {}  _controllerPauseStateCallbacks;
    bool  _enableAudioIssueDetector;
    AVAudioFormat * _engineFormat;
    unsigned int  _maximumFramesToRender;
    struct ExternalStreamSessionCommandExecutor { 
        int (**_vptr$ICommandable)(); 
        void *mCommandQueues; 
        int mQueueCount; 
        struct log_category {} *mLogCategory; 
        struct atomic<bool> { 
            struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
                _Atomic bool __a_value; 
            } __a_; 
        } mIsOverflowing; 
    }  _sessionCommandExecutor;
    NSMutableDictionary * _streamGroups;
    void * _taskManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_setPauseExternalInputStreamWithoutNotifyingClient:(id)arg1 isPaused:(bool)arg2 error:(id*)arg3;
- (void)abandonControlOfExternalStreamGroupID:(id)arg1 withCallback:(id /* block */)arg2;
- (unsigned long long)addControllerPauseStateDidUpdateCallback:(id /* block */)arg1;
- (bool)addExternalInputStreamGroupID:(id)arg1 streamID:(id)arg2 attributedTo:(id)arg3 definition:(id)arg4 isPaused:(bool)arg5 canRecord:(bool)arg6 fader:(struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *x1; struct __shared_weak_count {} *x2; })arg7 pauseStateDidUpdateCallback:(id /* block */)arg8 error:(id*)arg9;
- (void)addExternalOutputStreamGroupID:(id)arg1 streamID:(id)arg2 attributedTo:(id)arg3 definition:(id)arg4 startsPaused:(bool)arg5 renderBlock:(id /* block */)arg6 withCallback:(id /* block */)arg7;
- (void)claimControlOfExternalStreamGroupID:(id)arg1 attributedTo:(id)arg2 stateChangeBlock:(id /* block */)arg3 withCallback:(id /* block */)arg4;
- (struct unique_ptr<Phase::Controller::StreamRenderer, std::default_delete<Phase::Controller::StreamRenderer>> { struct __compressed_pair<Phase::Controller::StreamRenderer *, std::default_delete<Phase::Controller::StreamRenderer>> { struct StreamRenderer {} *x_1_1_1; } x1; })createRendererForStream:(id)arg1 outputChannelLayout:(unsigned int)arg2 normalize:(bool)arg3 targetLKFS:(double)arg4 error:(id*)arg5;
- (void)executeSessionCommands;
- (id)formatForStream:(id)arg1 error:(id*)arg2;
- (void)gatherDebugInformation:(id /* block */)arg1;
- (id)initWithTaskManager:(void*)arg1 engineMode:(long long)arg2 engineFormat:(id)arg3 maximumFramesToRender:(unsigned int)arg4 enableAudioIssueDetector:(bool)arg5;
- (void)removeAllResourcesAttributedToClientID:(id)arg1;
- (void)removeControllerPauseStateDidUpdateCallback:(unsigned long long)arg1;
- (void)removeExternalInputStreamGroupID:(id)arg1 streamID:(id)arg2;
- (void)removeExternalOutputStreamGroupID:(id)arg1 streamID:(id)arg2 withCallback:(id /* block */)arg3;
- (unsigned int)sessionIdForStream:(id)arg1 error:(id*)arg2;
- (void)setExternalInputStreamSession:(unsigned int)arg1 isActive:(bool)arg2;
- (unsigned long long)setExternalInputStreamSessionMute:(unsigned int)arg1 isMuted:(bool)arg2 fadeTimeInSeconds:(float)arg3;
- (void)setMuteExternalInputStreamGroupID:(id)arg1 streamID:(id)arg2 isMuted:(bool)arg3;
- (bool)setPauseExternalInputStreamGroupID:(id)arg1 streamID:(id)arg2 isPaused:(bool)arg3 error:(id*)arg4;
- (bool)setPauseExternalOutputStreamGroupID:(id)arg1 streamID:(id)arg2 isPaused:(bool)arg3 error:(id*)arg4;
- (bool)streamIsPaused:(id)arg1 error:(id*)arg2;
- (long long)typeForStream:(id)arg1 error:(id*)arg2;
- (void)updateController:(id)arg1 pauseState:(bool)arg2;
- (void)updateExternalInputStreamRecordingAbility:(id)arg1 streamID:(id)arg2 canRecord:(bool)arg3;

@end

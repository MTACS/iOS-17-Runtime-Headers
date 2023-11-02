
@interface AUHALOutputUnit : AUAudioUnitV2Bridge {
    bool  _inputBusEnabled;
    id /* block */  _inputHandler;
    bool  _inputWasEnabled;
    id /* block */  _outputProvider;
    bool  _outputWasEnabled;
    int  _renderObserverToken;
    struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>>="__table_"{__hash_table<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>>, std::allocator<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>="__value_"Q {}  _renderObservers;
}

@property (getter=isInputEnabled, nonatomic) bool inputEnabled;
@property (getter=isOutputEnabled, nonatomic) bool outputEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)_inputHandler;
- (void)addRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (bool)canPerformInput;
- (bool)canPerformOutput;
- (void)dealloc;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(bool)arg3;
- (void)initAUHALOutputUnit;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { }*)arg1 description:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (bool)isInputEnabled;
- (bool)isOutputEnabled;
- (bool)isRunning;
- (id /* block */)outputProvider;
- (void)removeRenderObserver:(long long)arg1;
- (void)removeRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (void)setInputEnabled:(bool)arg1;
- (void)setInputHandler:(id /* block */)arg1;
- (void)setOutputEnabled:(bool)arg1;
- (void)setOutputProvider:(id /* block */)arg1;
- (bool)startHardwareAndReturnError:(id*)arg1;
- (void)stopHardware;
- (long long)tokenByAddingRenderObserver:(id /* block */)arg1;

@end

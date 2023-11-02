
@interface AUAudioUnitOfflineProcessor : NSObject {
    long long  _assetLength;
    AUAudioUnit * _audioUnit;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _destAudioStorage;
    struct BufferList { 
        struct vector<char, std::allocator<char>> { 
            char *__begin_; 
            char *__end_; 
            struct __compressed_pair<char *, std::allocator<char>> { 
                char *__value_; 
            } __end_cap_; 
        } mStorage; 
    }  _destBufferList;
    struct unique_ptr<OpaqueExtAudioFile, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> { 
        struct __compressed_pair<OpaqueExtAudioFile *, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> { 
            struct OpaqueExtAudioFile {} *__value_; 
        } __ptr_; 
    }  _destFile;
    id /* block */  _pullInputBlock;
    id /* block */  _renderBlock;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _srcAudioStorage;
    struct BufferList { 
        struct vector<char, std::allocator<char>> { 
            char *__begin_; 
            char *__end_; 
            struct __compressed_pair<char *, std::allocator<char>> { 
                char *__value_; 
            } __end_cap_; 
        } mStorage; 
    }  _srcBufferList;
    struct unique_ptr<OpaqueExtAudioFile, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> { 
        struct __compressed_pair<OpaqueExtAudioFile *, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> { 
            struct OpaqueExtAudioFile {} *__value_; 
        } __ptr_; 
    }  _srcFile;
}

@property (nonatomic, readonly) long long assetLength;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)assetLength;
- (id)initWithAudioUnit:(id)arg1 inputFileURL:(id)arg2 outputFileURL:(id)arg3 ioSampleRate:(long long)arg4;
- (bool)run;

@end


@interface AUPasscodeDecoder : AUAudioUnit {
    unsigned int  _actualChannelCount;
    struct map<unsigned int, std::any, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::any>>> { 
        struct __tree<std::__value_type<unsigned int, std::any>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, std::any>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::any>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _apcDecoderConfig;
    AUPasscodeCodecConfiguration * _codecConfig;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _ctMutex;
    id /* block */  _dataHandler;
    bool  _deliverDataSerially;
    unsigned int  _desiredChannelCount;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableData * _incomingPayload;
    struct BufferedInputBus { 
        AUAudioUnitBus *bus; 
        unsigned int maxFrames; 
        AVAudioPCMBuffer *pcmBuffer; 
        struct AudioBufferList {} *originalAudioBufferList; 
        struct AudioBufferList {} *mutableAudioBufferList; 
    }  _inputBus;
    AUAudioUnitBusArray * _inputBusArray;
    struct unique_ptr<AudioCapturerIfc, std::default_delete<AudioCapturerIfc>> { 
        struct __compressed_pair<AudioCapturerIfc *, std::default_delete<AudioCapturerIfc>> { 
            struct AudioCapturerIfc {} *__value_; 
        } __ptr_; 
    }  _inputCapturer;
    struct unique_ptr<APCDecoderBase, std::default_delete<APCDecoderBase>> { 
        struct __compressed_pair<APCDecoderBase *, std::default_delete<APCDecoderBase>> { 
            struct APCDecoderBase {} *__value_; 
        } __ptr_; 
    }  _kernel;
    struct array<std::unique_ptr<DecodedDataMessage>, 10UL> { 
        struct unique_ptr<DecodedDataMessage, std::default_delete<DecodedDataMessage>> { 
            struct __compressed_pair<DecodedDataMessage *, std::default_delete<DecodedDataMessage>> { 
                struct DecodedDataMessage {} *__value_; 
            } __ptr_; 
        } __elems_[10]; 
    }  _messagePool;
    AUAudioUnitBus * _outputBus;
    AUAudioUnitBusArray * _outputBusArray;
    APCListenerResultData * _resultData;
    struct unique_ptr<caulk::concurrent::messenger, std::default_delete<caulk::concurrent::messenger>> { 
        struct __compressed_pair<caulk::concurrent::messenger *, std::default_delete<caulk::concurrent::messenger>> { 
            struct messenger {} *__value_; 
        } __ptr_; 
    }  _rtMessenger;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _rxDataBuffer;
}

@property (nonatomic, retain) AUPasscodeCodecConfiguration *codecConfig;
@property (nonatomic, copy) id /* block */ dataHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) APCListenerResultData *resultData;

+ (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })getAUDesc;
+ (void)registerAU;
+ (id)supportedDecoders;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)codecConfig;
- (id /* block */)dataHandler;
- (void)deallocateRenderResources;
- (id)dispatchQueue;
- (void)handleDecodedData:(void*)arg1 ofLength:(int)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (id)resultData;
- (void)setCodecConfig:(id)arg1;
- (void)setDataHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setRenderingOffline:(bool)arg1;
- (void)setResultData:(id)arg1;
- (void)startAudioLogCapture;
- (void)stopAudioLogCapture;

@end

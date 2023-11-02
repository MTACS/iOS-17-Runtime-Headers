
@interface VCRateControlSmartBrake : VCObject {
    struct { 
        void *data; 
        void *reserved; 
        unsigned long long dim[4]; 
        unsigned long long stride[4]; 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long channels; 
        unsigned long long batch_number; 
        unsigned long long sequence_length; 
        unsigned long long stride_width; 
        unsigned long long stride_height; 
        unsigned long long stride_channels; 
        unsigned long long stride_batch_number; 
        unsigned long long stride_sequence_length; 
        int storage_type; 
    }  _bufferLSTMStateIn;
    struct { 
        void *data; 
        void *reserved; 
        unsigned long long dim[4]; 
        unsigned long long stride[4]; 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long channels; 
        unsigned long long batch_number; 
        unsigned long long sequence_length; 
        unsigned long long stride_width; 
        unsigned long long stride_height; 
        unsigned long long stride_channels; 
        unsigned long long stride_batch_number; 
        unsigned long long stride_sequence_length; 
        int storage_type; 
    }  _bufferLSTMStateOut;
    NSObject<OS_dispatch_queue> * _compilationQueue;
    int  _compilationStatus;
    id /* block */  _completionHandler;
    struct tagVCRateControlSmartBrakeConfig { 
        float thresholdOn; 
        float thresholdOff; 
        float nBandwidthSigmas; 
        unsigned char trialVersion; 
    }  _config;
    void * _context;
    float * _dataLSTM;
    unsigned long long  _dataLSTMSize;
    struct tagVCRateControlSmartBrakeInputBuffers { 
        struct { 
            void *data; 
            void *reserved; 
            unsigned long long dim[4]; 
            unsigned long long stride[4]; 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long channels; 
            unsigned long long batch_number; 
            unsigned long long sequence_length; 
            unsigned long long stride_width; 
            unsigned long long stride_height; 
            unsigned long long stride_channels; 
            unsigned long long stride_batch_number; 
            unsigned long long stride_sequence_length; 
            int storage_type; 
        } time; 
        struct { 
            void *data; 
            void *reserved; 
            unsigned long long dim[4]; 
            unsigned long long stride[4]; 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long channels; 
            unsigned long long batch_number; 
            unsigned long long sequence_length; 
            unsigned long long stride_width; 
            unsigned long long stride_height; 
            unsigned long long stride_channels; 
            unsigned long long stride_batch_number; 
            unsigned long long stride_sequence_length; 
            int storage_type; 
        } bitrate; 
        struct { 
            void *data; 
            void *reserved; 
            unsigned long long dim[4]; 
            unsigned long long stride[4]; 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long channels; 
            unsigned long long batch_number; 
            unsigned long long sequence_length; 
            unsigned long long stride_width; 
            unsigned long long stride_height; 
            unsigned long long stride_channels; 
            unsigned long long stride_batch_number; 
            unsigned long long stride_sequence_length; 
            int storage_type; 
        } OWRD; 
        struct { 
            void *data; 
            void *reserved; 
            unsigned long long dim[4]; 
            unsigned long long stride[4]; 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long channels; 
            unsigned long long batch_number; 
            unsigned long long sequence_length; 
            unsigned long long stride_width; 
            unsigned long long stride_height; 
            unsigned long long stride_channels; 
            unsigned long long stride_batch_number; 
            unsigned long long stride_sequence_length; 
            int storage_type; 
        } RTT; 
        struct { 
            void *data; 
            void *reserved; 
            unsigned long long dim[4]; 
            unsigned long long stride[4]; 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long channels; 
            unsigned long long batch_number; 
            unsigned long long sequence_length; 
            unsigned long long stride_width; 
            unsigned long long stride_height; 
            unsigned long long stride_channels; 
            unsigned long long stride_batch_number; 
            unsigned long long stride_sequence_length; 
            int storage_type; 
        } APLR; 
        struct { 
            void *data; 
            void *reserved; 
            unsigned long long dim[4]; 
            unsigned long long stride[4]; 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long channels; 
            unsigned long long batch_number; 
            unsigned long long sequence_length; 
            unsigned long long stride_width; 
            unsigned long long stride_height; 
            unsigned long long stride_channels; 
            unsigned long long stride_batch_number; 
            unsigned long long stride_sequence_length; 
            int storage_type; 
        } VPLR; 
    }  _inputBuffers;
    struct tagVCRateControlSmartBrakeInputTensor { 
        float time; 
        float bitrate; 
        float OWRD; 
        float RTT; 
        float APLR; 
        float VPLR; 
    }  _inputTensor;
    float  _isStartTimeSet;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    struct tagVCRateControlSmartBrakeOutputBuffers { 
        struct { 
            void *data; 
            void *reserved; 
            unsigned long long dim[4]; 
            unsigned long long stride[4]; 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long channels; 
            unsigned long long batch_number; 
            unsigned long long sequence_length; 
            unsigned long long stride_width; 
            unsigned long long stride_height; 
            unsigned long long stride_channels; 
            unsigned long long stride_batch_number; 
            unsigned long long stride_sequence_length; 
            int storage_type; 
        } networkCongestionProbability; 
        struct { 
            void *data; 
            void *reserved; 
            unsigned long long dim[4]; 
            unsigned long long stride[4]; 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long channels; 
            unsigned long long batch_number; 
            unsigned long long sequence_length; 
            unsigned long long stride_width; 
            unsigned long long stride_height; 
            unsigned long long stride_channels; 
            unsigned long long stride_batch_number; 
            unsigned long long stride_sequence_length; 
            int storage_type; 
        } bandwidth; 
        struct { 
            void *data; 
            void *reserved; 
            unsigned long long dim[4]; 
            unsigned long long stride[4]; 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long channels; 
            unsigned long long batch_number; 
            unsigned long long sequence_length; 
            unsigned long long stride_width; 
            unsigned long long stride_height; 
            unsigned long long stride_channels; 
            unsigned long long stride_batch_number; 
            unsigned long long stride_sequence_length; 
            int storage_type; 
        } bandwidthSigma; 
    }  _outputBuffers;
    struct tagVCRateControlSmartBrakeOutputTensor { 
        float networkCongestionProbability; 
        float bandwidth; 
        float bandwidthSigma; 
    }  _outputTensor;
    void * _plan;
    float  _previousInputTime;
}

@property (nonatomic, readonly) struct tagVCRateControlSmartBrakeConfig { float x1; float x2; float x3; unsigned char x4; } config;

- (int)bindInputBuffers;
- (int)bindLSTMBuffers;
- (int)bindOutputBuffers;
- (void)compileModel;
- (struct tagVCRateControlSmartBrakeConfig { float x1; float x2; float x3; unsigned char x4; })config;
- (void)dealloc;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (int)setupModel;
- (int)setupNetAndConfigFromPath:(id)arg1;

@end

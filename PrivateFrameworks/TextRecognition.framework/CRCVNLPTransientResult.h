
@interface CRCVNLPTransientResult : NSObject <CRTextRecognizerDecodingTransientResult> {
    CVNLPActivationMatrix * _activationMatrix;
    NSString * _decodingLocale;
    CVNLPTextDecodingResult * _greedyDecodingResult;
    NSObject<OS_dispatch_semaphore> * _languageRecognitionActiveSem;
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
    }  activationsBuffer;
    struct optional<espresso_buffer_t> { 
        union { 
            BOOL __null_state_; 
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
            } __val_; 
        } ; 
        bool __engaged_; 
    }  indexBuffer;
}

@property (retain) CVNLPActivationMatrix *activationMatrix;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *decodingLocale;
@property (readonly, copy) NSString *description;
@property (retain) CVNLPTextDecodingResult *greedyDecodingResult;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_semaphore> *languageRecognitionActiveSem;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activationMatrix;
- (id)decodingLocale;
- (id)greedyDecodingResult;
- (id)initWithActivationMatrix:(id)arg1 decodingLocale:(id)arg2;
- (id)initWithActivationMatrix:(id)arg1 decodingLocale:(id)arg2 activationsBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg3;
- (id)initWithActivationMatrix:(id)arg1 decodingLocale:(id)arg2 activationsBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg3 indexBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg4;
- (id)languageRecognitionActiveSem;
- (struct ActivationMatrix { unsigned long long x1; unsigned long long x2; struct vector<float, std::allocator<float>> { float *x_3_1_1; float *x_3_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_3_1_3; } x3; struct vector<float, std::allocator<float>> { float *x_4_1_1; float *x_4_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_4_1_3; } x4; float *x5; float *x6; })modernizedActivationMatrix;
- (void)setActivationMatrix:(id)arg1;
- (void)setDecodingLocale:(id)arg1;
- (void)setGreedyDecodingResult:(id)arg1;
- (void)setLanguageRecognitionActiveSem:(id)arg1;

@end

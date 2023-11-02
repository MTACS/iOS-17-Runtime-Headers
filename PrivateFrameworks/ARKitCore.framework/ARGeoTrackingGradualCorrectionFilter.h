
@interface ARGeoTrackingGradualCorrectionFilter : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _ENUFromVIOCurrent;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _ENUFromVIOTarget;
    double  _lastTimestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _lastVIOPose;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _posHistory;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _posHistoryC;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _targetLock;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } ENUFromVIOTarget;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ENUFromVIOTarget;
- (bool)getCurrentENUFromVIO:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1;
- (id)initWithTargetTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setENUFromVIOTarget:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTargetRotation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTargetTranslation;
- (void)updateWithVIOPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 timestamp:(double)arg2;

@end

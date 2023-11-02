
@interface SNLogMelTransformer : NSObject {
    struct unique_ptr<LogMelTransformer, std::default_delete<LogMelTransformer>> { 
        struct __compressed_pair<LogMelTransformer *, std::default_delete<LogMelTransformer>> { 
            struct LogMelTransformer {} *__value_; 
        } __ptr_; 
    }  _logMelTransformer;
}

@property (readonly) long long bandCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)bandCount;
- (id)init;
- (id)initWithFrameCount:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)transform:(const float*)arg1 into:(float*)arg2;

@end

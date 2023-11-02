
@interface PPSTimestampConverter : NSObject {
    NSURL * _filepath;
    struct vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _systemOffsets;
    double  _timeZoneOffset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_initializeSystemOffsetCache;
- (bool)_isInitialized;
- (double)epochTimeFromMonotonicTime:(double)arg1;
- (id)initWithFilepath:(id)arg1;
- (double)localTimeFromMonotonicTime:(double)arg1;
- (double)monotonicTimeFromEpochTime:(double)arg1;
- (double)systemOffsetFromMonotonicTime:(double)arg1;

@end

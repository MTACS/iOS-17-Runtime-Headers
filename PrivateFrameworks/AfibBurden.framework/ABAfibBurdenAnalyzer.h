
@interface ABAfibBurdenAnalyzer : NSObject {
    struct optional<beryllium::output_t> { 
        union { 
            BOOL __null_state_; 
            struct output_t { 
                float Afib_burden; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _rawBurdenValue;
    unsigned char  _segmentsCount;
    unsigned char  _segmentsWith5TachCount;
}

@property (nonatomic) unsigned char segmentsCount;
@property (nonatomic) unsigned char segmentsWith5TachCount;

+ (void)removeDiagnosticLogFiles;

- (id).cxx_construct;
- (id)determineBurdenForTachogramClassificationBuckets:(id)arg1;
- (id)init;
- (void)logToFileForTachoList:(id)arg1 withBurdenResults:(id)arg2;
- (id)processResults:(void*)arg1 withAlgsAnalytics:(struct core_analytics_t { float x1; float x2; double x3; double x4; }*)arg2;
- (unsigned char)segmentsCount;
- (unsigned char)segmentsWith5TachCount;
- (void)setSegmentsCount:(unsigned char)arg1;
- (void)setSegmentsWith5TachCount:(unsigned char)arg1;

@end

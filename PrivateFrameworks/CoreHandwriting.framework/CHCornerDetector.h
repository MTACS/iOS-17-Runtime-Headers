
@interface CHCornerDetector : NSObject {
    NSMutableIndexSet * __cornerIndexSet;
    NSMutableIndexSet * __directionChangeCornerIndexes;
    struct vector<std::map<long, long>, std::allocator<std::map<long, long>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::map<long, long> *, std::allocator<std::map<long, long>>> { 
            void *__value_; 
        } __end_cap_; 
    }  __resampledDrawingPointMap;
    unsigned long long  __strawSize;
    unsigned long long  _directionChangeCount;
    CHDrawing * _drawing;
    unsigned long long  _highestDirectionChangeCount;
    double  _minimumSignificantSegmentLength;
    CHDrawing * _resampledDrawing;
    bool  _shouldUseDynamicSampling;
}

@property (nonatomic, readonly) unsigned long long directionChangeCount;
@property (nonatomic, copy) CHDrawing *drawing;
@property (nonatomic, readonly) unsigned long long highestDirectionChangeCount;
@property (nonatomic) double minimumSignificantSegmentLength;
@property (nonatomic, readonly, copy) CHDrawing *resampledDrawing;
@property (nonatomic) bool shouldUseDynamicSampling;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cornerIndexes;
- (id)directionChangeCornerIndexes;
- (unsigned long long)directionChangeCount;
- (id)drawing;
- (unsigned long long)highestDirectionChangeCount;
- (id)init;
- (double)minimumSignificantSegmentLength;
- (id)resampledDrawing;
- (void)setDrawing:(id)arg1;
- (void)setMinimumSignificantSegmentLength:(double)arg1;
- (void)setShouldUseDynamicSampling:(bool)arg1;
- (bool)shouldUseDynamicSampling;

@end

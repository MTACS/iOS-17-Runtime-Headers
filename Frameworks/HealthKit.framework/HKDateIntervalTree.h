
@interface HKDateIntervalTree : NSObject {
    struct unique_ptr<HKIntervalTree<double>, std::default_delete<HKIntervalTree<double>>> { 
        struct __compressed_pair<HKIntervalTree<double> *, std::default_delete<HKIntervalTree<double>>> { 
            void *__value_; 
        } __ptr_; 
    }  _tree;
}

@property (nonatomic) bool mergeIntervals;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)hasOverlapWithInterval:(id)arg1;
- (bool)hasOverlapWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)init;
- (void)insertInterval:(id)arg1;
- (void)insertIntervalWithStartTime:(double)arg1 endTime:(double)arg2;
- (bool)mergeIntervals;
- (id)mergedIntervals;
- (void)setMergeIntervals:(bool)arg1;

@end


@interface NUHistogram : NSObject <NSCopying, NSMutableCopying> {
    struct unique_ptr<NU::Histogram<long, double>, std::default_delete<NU::Histogram<long, double>>> { 
        struct __compressed_pair<NU::Histogram<long, double> *, std::default_delete<NU::Histogram<long, double>>> { 
            void *__value_; 
        } __ptr_; 
    }  _histogram;
}

@property (nonatomic, readonly) long long binCount;
@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) double median;
@property (nonatomic, readonly) double minimum;
@property (nonatomic, readonly) double mode;
@property (nonatomic, readonly) struct { double x1; double x2; } range;
@property (nonatomic, readonly) long long sampleCount;
@property (nonatomic, readonly) const long long*values;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)_samplerForSampleMode:(long long)arg1;
- (long long)binCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)init;
- (id)initWithBinCount:(long long)arg1 range:(struct { double x1; double x2; })arg2;
- (id)initWithHistogram:(id)arg1;
- (double)maximum;
- (double)median;
- (double)minimum;
- (id)modalityAnalysisWithLimit:(long long)arg1 locality:(double)arg2 sensitivity:(double)arg3 sampleMode:(long long)arg4;
- (id)modalityAnalysisWithLimit:(long long)arg1 sampleMode:(long long)arg2;
- (double)mode;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)percentile:(double)arg1;
- (struct { double x1; double x2; })range;
- (long long)sampleCount;
- (double)threshold:(double)arg1;
- (const long long*)values;

@end

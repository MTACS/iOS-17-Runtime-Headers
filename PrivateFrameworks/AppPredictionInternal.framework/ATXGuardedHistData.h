
@interface ATXGuardedHistData : NSObject {
    unsigned short  _bucketCount;
    bool  _filter;
    ATXHistogramData * _histogramData;
}

- (void).cxx_destruct;
- (id)initWithHistogramData:(id)arg1 bucketCount:(unsigned short)arg2 filter:(bool)arg3;

@end

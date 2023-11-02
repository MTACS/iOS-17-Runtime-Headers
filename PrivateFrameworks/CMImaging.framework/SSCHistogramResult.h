
@interface SSCHistogramResult : NSObject {
    struct { 
        unsigned int bins[256]; 
    }  _bins;
    <MTLCommandBuffer> * _commandBuffer;
    <MTLBuffer> * _histogramBuffer;
    bool  _realized;
}

- (void).cxx_destruct;
- (void)_realize;
- (struct { unsigned int x1[256]; }*)getHistogramBins;
- (id)getHistogramMetalBuffer;
- (id)initForCpuUsage;
- (id)initWithCommandBuffer:(id)arg1 andHistogramBuffer:(id)arg2;

@end


@interface ARDepthPointCloudCoalescer : NSObject {
    ADAggregationParameters * _aggregationParameters;
    ADPointCloudAggregator * _aggregator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _aggregatorLock;
}

@property (nonatomic, copy) ADAggregationParameters *aggregationParameters;

- (void).cxx_destruct;
- (id)_createModifiedParametersIfNecessary:(id)arg1;
- (void)addDepthPointCloudData:(id)arg1;
- (id)aggregationParameters;
- (id)depthPointCloudWithPose:(id)arg1 imageData:(id)arg2;
- (id)init;
- (void)setAggregationParameters:(id)arg1;

@end

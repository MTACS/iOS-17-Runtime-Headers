
@interface AWDServerConnection : NSObject

- (void)flushToQueue:(struct dispatch_queue_s { }*)arg1 block:(id /* block */)arg2;
- (unsigned long long)getAWDTimestamp;
- (id)getComponentConfigurationParameters;
- (id)initWithComponentId:(unsigned int)arg1;
- (id)initWithComponentId:(unsigned int)arg1 andBlockOnConfiguration:(bool)arg2;
- (id)newMetricContainerWithIdentifier:(unsigned int)arg1;
- (void)registerComponentParametersChangeCallback:(id /* block */)arg1;
- (bool)registerConfigChangeCallback:(id /* block */)arg1;
- (bool)registerQueriableMetric:(unsigned int)arg1 callback:(id /* block */)arg2;
- (bool)registerQueriableMetricCallback:(id /* block */)arg1 forIdentifier:(unsigned int)arg2;
- (bool)submitMetric:(id)arg1;

@end

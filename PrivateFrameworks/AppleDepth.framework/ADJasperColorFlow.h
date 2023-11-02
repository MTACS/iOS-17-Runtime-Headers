
@interface ADJasperColorFlow : ADFlow <ADFlowColorConsumer, ADFlowPointCloudConsumer> {
    ADJasperColorExecutor * _executor;
    ADPointCloudAggregator * _pointCloudAggregator;
    ADStreamSync * _streamSync;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) ADJasperColorExecutor *executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)executor;
- (id)initWithExecutor:(id)arg1;
- (void)processIfMatch:(id)arg1;
- (void)pushColor:(struct __CVBuffer { }*)arg1 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 calibration:(id)arg3 timestamp:(double)arg4;
- (void)pushPointCloud:(id)arg1 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 calibration:(id)arg3 timestamp:(double)arg4;

@end

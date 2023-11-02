
@interface HIDDisplayIOReportingInterface : HIDDisplayInterface {
    id /* block */  _dataHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _usageElementMap;
}

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (id)getHIDDevices;
- (id)initWithContainerID:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInputDataHandler:(id /* block */)arg1;
- (bool)setOutputData:(id)arg1 error:(id*)arg2;
- (bool)setupIOReporting;

@end

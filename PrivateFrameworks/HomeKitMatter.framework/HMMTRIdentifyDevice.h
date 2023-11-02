
@interface HMMTRIdentifyDevice : NSObject {
    MTRBaseDevice * _baseDevice;
    NSObject<OS_dispatch_queue> * _queue;
    HMMTRDeviceTopology * _topology;
}

@property (retain) MTRBaseDevice *baseDevice;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HMMTRDeviceTopology *topology;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_childNodesWithIdentifyForEndpoint:(unsigned short)arg1 completionHandler:(id /* block */)arg2;
- (void)_identifyClusterPresentAtEndpoint:(unsigned short)arg1 completionHandler:(id /* block */)arg2;
- (void)_issueIdentifyCommand:(unsigned short)arg1 completionHandler:(id /* block */)arg2;
- (void)_validIdentifyNodeForParentAtEndpoint:(unsigned short)arg1 completionHandler:(id /* block */)arg2;
- (id)baseDevice;
- (void)identifyWithEndpoint:(unsigned short)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithBaseDevice:(id)arg1 topology:(id)arg2 queue:(id)arg3;
- (id)queue;
- (void)setBaseDevice:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)topology;

@end

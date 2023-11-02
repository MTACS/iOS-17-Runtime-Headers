
@interface HMCameraClipVideoFileCombiner : NSObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _videoFileURLs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *videoFileURLs;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)combineToOutputFileURL:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithVideoFileURLs:(id)arg1 queue:(id)arg2;
- (id)queue;
- (id)videoFileURLs;
- (void)writeSamplesFromOutputs:(id)arg1 toInput:(id)arg2 completion:(id /* block */)arg3;

@end

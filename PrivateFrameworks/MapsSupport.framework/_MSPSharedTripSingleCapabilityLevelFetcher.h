
@interface _MSPSharedTripSingleCapabilityLevelFetcher : NSObject <MSPSharedTripCapabilityLevelFetcherObserver> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completion;
    MSPSharedTripContact * _contact;
    _MSPSharedTripSingleCapabilityLevelFetcher * _keepAliveReference;
    double  _timeoutInterval;
    GCDTimer * _timeoutTimer;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finish;
- (void)_timeout;
- (void)capabilityLevelsDidUpdate;
- (id)initWithContact:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)start;

@end

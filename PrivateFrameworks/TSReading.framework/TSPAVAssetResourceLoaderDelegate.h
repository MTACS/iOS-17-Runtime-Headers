
@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    NSObject<OS_dispatch_queue> * _concurrentRequestQueue;
    NSString * _contentTypeUTI;
    TSPFileDataStorage * _dataStorage;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    <TSUReadChannel> * _readChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_provideData:(id)arg1 untilRequestCancelledForResourceLoadingRequest:(id)arg2;
- (void)dealloc;
- (id)delegateQueue;
- (id)initWithTSPFileDataStorage:(id)arg1 contentTypeUTI:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;

@end

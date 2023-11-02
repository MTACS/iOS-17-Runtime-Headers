
@interface MKMapItemMetadataRequester : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSMapTable * _dataForTasks;
    NSMapTable * _requestsForURLs;
    NSURLSession * _session;
    NSMapTable * _tasksForURLs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancelRequestsForMapItem:(id)arg1;
- (void)dealloc;
- (void)handleTask:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (id)init;
- (void)sendRequest:(id)arg1;

@end

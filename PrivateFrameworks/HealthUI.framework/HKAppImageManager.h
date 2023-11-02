
@interface HKAppImageManager : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSMapTable * _containers;
    NSCache * _iconCache;
    NSObject<OS_dispatch_queue> * _managerQueue;
    NSMutableDictionary * _outstandingRequests;
    NSURLSession * _session;
    NSMutableDictionary * _urlConnections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSCache *iconCache;
@property (retain) NSMutableDictionary *outstandingRequests;
@property (readonly) Class superclass;

+ (id)defaultAppIcon;
+ (id)defaultAppIconTableUI;
+ (id)defaultDeviceIconTableUIForSource:(id)arg1;
+ (id)sharedImageManager;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_dispatchResponsesForAppIconForIdentifier:(id)arg1 appImage:(id)arg2;
- (void)_enqueueRequestForAppIconForIdentifier:(id)arg1;
- (void)_queue_cacheAppIcon:(id)arg1 forIdentifier:(id)arg2;
- (id)_queue_fetchIconFromLaunchServicesWithIdentifier:(id)arg1;
- (void)_queue_loadAppIconForSource:(id)arg1 onCompletion:(id /* block */)arg2;
- (id)_queue_researchStudyIconForSource:(id)arg1;
- (id)_queue_synchronousLoadIconForSource:(id)arg1;
- (void)cacheAppIcon:(id)arg1 forIdentifier:(id)arg2;
- (void)clearImageCache;
- (id)iconCache;
- (id)iconForDevice:(id)arg1;
- (id)iconForSource:(id)arg1;
- (id)init;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadAppImageAtURL:(id)arg1 crop:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)loadIconForSource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadIconForSource:(id)arg1 syncHandler:(id /* block */)arg2 asyncHandler:(id /* block */)arg3;
- (id)outstandingRequests;
- (id)researchStudyIconForSource:(id)arg1;
- (void)setIconCache:(id)arg1;
- (void)setOutstandingRequests:(id)arg1;

@end

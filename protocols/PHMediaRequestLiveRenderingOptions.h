
@protocol PHMediaRequestLiveRenderingOptions <NSObject>

@required

- (bool)isCurrentVersion;
- (bool)isNetworkAccessAllowed;
- (bool)liveRenderAndOnDemandRenderVideoConcurrently;
- (bool)liveRenderVideoIfNeeded;
- (id /* block */)progressHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, double, NSError *, bool*, NSDictionary *, void*, id, SEL
- (NSObject<OS_dispatch_queue> *)renderResultHandlerQueue;

@end

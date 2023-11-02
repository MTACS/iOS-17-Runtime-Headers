
@protocol TSUNetworkReachabilityCore <NSObject>

@required

- (bool)getReachabilityFlags:(out unsigned int*)arg1;
- (bool)startNotifyingWithQueue:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*
- (void)stopNotifying;

@end

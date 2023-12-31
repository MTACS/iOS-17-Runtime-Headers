
@interface NanoResourceGrabber : NSObject {
    bool  _connectionMayBeValid;
    NSObject<OS_dispatch_queue> * _iconCacheQueue;
    NSXPCConnection * _nrgdConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property bool connectionMayBeValid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *iconCacheQueue;
@property (nonatomic, retain) NSXPCConnection *nrgdConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)_iconVariant:(int)arg1 fromURL:(id)arg2;
+ (id)liIconVariants;
+ (id)nrgIconVariants;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2;
- (void)_getPhoneIconForBundleID:(id)arg1 iconVariant:(int)arg2 timeout:(double)arg3 block:(id /* block */)arg4;
- (void)_getPhoneLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3;
- (void)_getRemoteIconForBundleIDBypassingCache:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3 timeout:(double)arg4;
- (void)_setCachedIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3;
- (id)connectToService;
- (bool)connectionMayBeValid;
- (void)dealloc;
- (void)getAppViewListImage:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 queue:(id)arg4 updateBlock:(id /* block */)arg5 timeout:(double)arg6;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 updateBlock:(id /* block */)arg4;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3 timeout:(double)arg4;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 queue:(id)arg3 block:(id /* block */)arg4 timeout:(double)arg5;
- (id)iconCacheQueue;
- (id)init;
- (id)nrgdConnection;
- (id)queue;
- (void)setConnectionMayBeValid:(bool)arg1;
- (void)setIconCacheQueue:(id)arg1;
- (void)setNrgdConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end

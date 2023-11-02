
@interface FMFMapSession : NSObject {
    NSXPCConnection * _connection;
    FMFMapCache * _mapCache;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) FMFMapCache *mapCache;

+ (id)newConnection;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (void)gridImageForScreenRatio:(double)arg1 andCompletion:(id /* block */)arg2;
- (void)gridImageForWidth:(double)arg1 height:(double)arg2 cache:(bool)arg3 andCompletion:(id /* block */)arg4;
- (id)mapCache;
- (void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 screenRatio:(double)arg4 andCompletion:(id /* block */)arg5;
- (void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 cache:(bool)arg6 andCompletion:(id /* block */)arg7;
- (void)mapImageForLocation:(id)arg1 isShifted:(bool)arg2 altitude:(double)arg3 pitch:(double)arg4 screenRatio:(double)arg5 andCompletion:(id /* block */)arg6;
- (void)mapImageForLocation:(id)arg1 isShifted:(bool)arg2 altitude:(double)arg3 pitch:(double)arg4 width:(double)arg5 height:(double)arg6 cache:(bool)arg7 andCompletion:(id /* block */)arg8;
- (void)mapImageForLocation:(id)arg1 isShifted:(bool)arg2 radius:(double)arg3 width:(double)arg4 height:(double)arg5 cache:(bool)arg6 andCompletion:(id /* block */)arg7;
- (void)mapImageForLocation:(id)arg1 radius:(double)arg2 width:(double)arg3 height:(double)arg4 cache:(bool)arg5 andCompletion:(id /* block */)arg6;
- (void)mapImageForRequest:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)noLocationImageForScreenRatio:(double)arg1 andCompletion:(id /* block */)arg2;
- (void)noLocationImageForWidth:(double)arg1 height:(double)arg2 cache:(bool)arg3 andCompletion:(id /* block */)arg4;
- (void)setConnection:(id)arg1;
- (void)setMapCache:(id)arg1;

@end

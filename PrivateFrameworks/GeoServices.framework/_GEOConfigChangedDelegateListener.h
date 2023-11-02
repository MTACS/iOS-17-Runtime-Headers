
@interface _GEOConfigChangedDelegateListener : NSObject <_GEOConfigChangedListener> {
    <GEOConfigChangeListenerDelegate> * delegate;
    _GEOConfigKeyHelper * keyHelper;
    NSObject<OS_dispatch_queue> * queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)callListener;
- (id)description;

@end

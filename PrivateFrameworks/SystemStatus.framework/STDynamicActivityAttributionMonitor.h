
@interface STDynamicActivityAttributionMonitor : NSObject <STDynamicActivityAttributionClientHandle> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_attributions;
    id /* block */  _lock_handler;
    bool  _lock_invalidated;
    <STDynamicActivityAttributionServerHandle> * _lock_server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (id)attributionForAttribution:(id)arg1;
- (id)attributionForClient:(struct { unsigned int x1[8]; })arg1;
- (struct { unsigned int x1[8]; })auditToken;
- (id)currentAttributions;
- (void)currentAttributionsDidChange:(id)arg1;
- (void)dealloc;
- (id /* block */)handler;
- (id)init;
- (id)initWithServerHandle:(id)arg1;
- (void)invalidate;
- (void)setHandler:(id /* block */)arg1;

@end

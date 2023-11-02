
@interface AudioComponentRegistrar : NSObject <NSXPCListenerDelegate> {
    void * _impl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*impl;
@property (readonly) Class superclass;

- (void)dealloc;
- (void*)impl;
- (id)initForMode:(bool)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)replaceListener:(id)arg1 withListener:(id)arg2;
- (void)resumeListeners;

@end

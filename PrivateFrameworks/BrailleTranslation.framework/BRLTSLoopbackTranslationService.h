
@interface BRLTSLoopbackTranslationService : BRLTSTranslationService <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end


@interface DUXPCServerDelegate : NSObject <NSXPCListenerDelegate> {
    _TtC21DocumentUnderstanding24TextUnderstandingManager * _textUnderstandingManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithManager:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end


@interface NEFilterExtensionProviderContext : NEExtensionProviderContext <NEFilterExtensionProviderHostProtocol, NEFilterExtensionProviderProtocol> {
    NSString * _description;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)queue;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopWithReason:(int)arg1;

@end

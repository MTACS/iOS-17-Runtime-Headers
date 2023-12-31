
@interface SPXcodeSupport : NSObject <SPLocalApplicationProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)applicationIdentifierWithReply:(id /* block */)arg1;
- (void)receiveData:(id)arg1;

@end

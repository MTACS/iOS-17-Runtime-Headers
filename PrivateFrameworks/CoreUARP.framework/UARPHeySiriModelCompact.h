
@interface UARPHeySiriModelCompact : UARPHeySiriModelBase <UARPHeySiriModelDelegateProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tag;

- (void)currentHeySiriModel:(id)arg1 fallbackModel:(id)arg2 error:(id)arg3;
- (id)generateAsset:(id*)arg1;
- (id)init;
- (bool)processDynamicAsset:(id*)arg1;

@end


@protocol BSServiceConnectionConfiguring

@required

- (void)setActivationHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSServiceConnection<BSServiceConnectionContext> *, void*
- (void)setInterface:(BSServiceInterface *)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setInterruptionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSServiceConnection<BSServiceConnectionContext> *, void*
- (void)setInvalidationHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSServiceConnection<BSServiceConnectionContext> *, void*
- (void)setName:(NSString *)arg1;
- (void)setServiceQuality:(BSServiceQuality *)arg1;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setUserInfo:(id <NSCopying>)arg1;

@end


@interface BRCContainerCellularSettings : NSObject {
    <NSObject> * _accountDidChangeNotificationObserver;
    NSNumber * _isCellularEnabledForDocumentsAndData;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)containerCellularSettings;

- (void).cxx_destruct;
- (void)_accountDidChange;
- (void)dealloc;
- (id)initWithPersonaID:(id)arg1;
- (bool)isCellularEnabled;

@end

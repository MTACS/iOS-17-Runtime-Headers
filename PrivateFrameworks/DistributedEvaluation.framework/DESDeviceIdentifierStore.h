
@interface DESDeviceIdentifierStore : NSObject {
    NSMutableDictionary * _deviceIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _storeURL;
}

@property (nonatomic, retain) NSMutableDictionary *deviceIdentifiers;
@property (nonatomic, retain) NSURL *storeURL;

- (void).cxx_destruct;
- (void)_readIdentifierStore;
- (void)_writeIdentifierStore;
- (id)deviceIdentifiers;
- (id)identifierForBundleId:(id)arg1;
- (id)init;
- (id)initWithStoreURL:(id)arg1;
- (void)setDeviceIdentifiers:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (id)storeURL;

@end

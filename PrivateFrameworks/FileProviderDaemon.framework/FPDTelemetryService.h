
@interface FPDTelemetryService : NSObject {
    FPDExtensionManager * _extensionManager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) FPDExtensionManager *extensionManager;

- (void).cxx_destruct;
- (id)extensionManager;
- (id)init;
- (void)setExtensionManager:(id)arg1;
- (void)start;

@end

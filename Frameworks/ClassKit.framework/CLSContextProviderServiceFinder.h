
@interface CLSContextProviderServiceFinder : NSObject {
    <CLSContextProviderServiceFinderDelegate> * _delegate;
    NSDictionary * _extensionAttributes;
    id  _extensionsFinderContext;
    NSMutableArray * _mutableAvailableServices;
    NSObject<OS_dispatch_queue> * _servicesQueue;
}

@property (nonatomic, readonly, copy) NSArray *availableServices;

- (void).cxx_destruct;
- (id)availableServices;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end

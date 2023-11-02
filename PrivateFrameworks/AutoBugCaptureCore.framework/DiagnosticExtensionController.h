
@interface DiagnosticExtensionController : NSObject {
    NSString * _destinationRootDirectory;
    NSObject<OS_dispatch_queue> * _queue;
    NSDateFormatter * dateFormatter;
}

@property (nonatomic, readonly) NSString *destinationRootDirectory;

- (void).cxx_destruct;
- (void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 queue:(id)arg3 reply:(id /* block */)arg4;
- (void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 queue:(id)arg3 reply:(id /* block */)arg4;
- (id)destinationRootDirectory;
- (id)initWithDestinationDirectory:(id)arg1;

@end

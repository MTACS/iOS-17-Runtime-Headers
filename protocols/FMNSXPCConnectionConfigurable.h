
@protocol FMNSXPCConnectionConfigurable <NSObject>

@required

- (NSXPCInterface *)exportedInterface;
- (bool)machService;
- (unsigned long long)options;
- (NSXPCInterface *)remoteInterface;
- (NSString *)serviceName;

@end

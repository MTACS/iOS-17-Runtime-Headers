
@protocol CXServiceDefinition <NSObject>

@required

- (Protocol *)clientXPCInterface;
- (CXServiceDomain *)domain;
- (NSString *)name;
- (Protocol *)serverXPCInterface;

@end

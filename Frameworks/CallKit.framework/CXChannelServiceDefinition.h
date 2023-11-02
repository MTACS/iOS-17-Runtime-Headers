
@interface CXChannelServiceDefinition : NSObject <CXServiceDefinition>

@property (readonly, copy) Protocol *clientXPCInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CXServiceDomain *domain;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly, copy) Protocol *serverXPCInterface;
@property (readonly) Class superclass;

- (id)clientXPCInterface;
- (id)domain;
- (id)name;
- (id)serverXPCInterface;

@end

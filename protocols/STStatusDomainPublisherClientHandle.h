
@protocol STStatusDomainPublisherClientHandle <NSObject>

@required

- (void)handleUserInteraction:(id <STStatusDomainUserInteraction>)arg1 forDomain:(unsigned long long)arg2;

@end

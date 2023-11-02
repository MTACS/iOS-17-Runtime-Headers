
@protocol STStatusDomainClientHandle <NSObject>

@required

- (void)observeData:(id <STStatusDomainData>)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id <STStatusDomainDataChangeContext>)arg3;
- (NSArray *)preferredLocalizations;

@end

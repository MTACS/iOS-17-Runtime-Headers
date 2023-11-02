
@protocol STStatusDomainXPCClient <NSObject>

@required

- (void)observeData:(id <STStatusDomainData>)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id <STStatusDomainDataChangeContext>)arg3;
- (void)observeDiff:(id <STStatusDomainDataDiff>)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id <STStatusDomainDataChangeContext>)arg3;

@end

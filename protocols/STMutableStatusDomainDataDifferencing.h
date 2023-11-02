
@protocol STMutableStatusDomainDataDifferencing <STStatusDomainDataDifferencing>

@required

- (bool)applyDiff:(id <STStatusDomainDataDiff>)arg1;

@end

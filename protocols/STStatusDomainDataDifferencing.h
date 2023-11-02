
@protocol STStatusDomainDataDifferencing <NSObject>

@required

- (<STStatusDomainData><STStatusDomainDataDifferencing> *)dataByApplyingDiff:(id <STStatusDomainDataDiff>)arg1;
- (<STStatusDomainDataDiff> *)diffFromData:(id <STStatusDomainData>)arg1;

@end

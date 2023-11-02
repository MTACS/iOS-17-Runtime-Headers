
@protocol STStatusDomainDataDiff <NSObject, NSSecureCoding>

@required

- (<STStatusDomainDataDiff> *)diffByApplyingDiff:(id <STStatusDomainDataDiff>)arg1;
- (bool)isEmpty;
- (bool)isOrthogonalToDiff:(id <STStatusDomainDataDiff>)arg1;

@end

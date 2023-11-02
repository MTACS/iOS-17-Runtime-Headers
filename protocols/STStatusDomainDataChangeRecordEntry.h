
@protocol STStatusDomainDataChangeRecordEntry <NSObject>

@required

- (id)clientKey;
- (<STStatusDomainData><STStatusDomainDataDifferencing> *)data;
- (<STStatusDomainDataDiff> *)diff;
- (unsigned long long)entryType;

@end

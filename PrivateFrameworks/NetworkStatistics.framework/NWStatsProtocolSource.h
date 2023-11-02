
@interface NWStatsProtocolSource : NWStatsSource {
    unsigned long long  _cumulativeAccountingRxCellularBytes;
    unsigned long long  _cumulativeAccountingTxCellularBytes;
}

@property (nonatomic) unsigned long long cumulativeAccountingRxCellularBytes;
@property (nonatomic) unsigned long long cumulativeAccountingTxCellularBytes;

- (unsigned long long)cumulativeAccountingRxCellularBytes;
- (unsigned long long)cumulativeAccountingTxCellularBytes;
- (void)setCumulativeAccountingRxCellularBytes:(unsigned long long)arg1;
- (void)setCumulativeAccountingTxCellularBytes:(unsigned long long)arg1;

@end


@interface CAMLedger : NSObject {
    int  _footprintLedgerIndex;
    long long  _ledgerCount;
    struct ledger_entry_info { long long x1; long long x2; long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; } * _ledgerEntries;
}

+ (id)sharedInstance;

- (void)dealloc;
- (long long)footprint;
- (id)init;

@end


@interface PFHistoryAnalyzerOptions : NSObject <NSCopying> {
    bool  _automaticallyPruneTransientRecords;
    unsigned long long  _transactionLimit;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

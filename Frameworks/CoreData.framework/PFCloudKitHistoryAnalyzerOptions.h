
@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {
    bool  _includePrivateTransactions;
    NSCloudKitMirroringRequest * _request;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end

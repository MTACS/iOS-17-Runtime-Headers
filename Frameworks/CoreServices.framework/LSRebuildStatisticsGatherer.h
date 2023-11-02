
@interface LSRebuildStatisticsGatherer : NSObject {
    unsigned long long  _containerizedContentScanTime;
    unsigned long long  _cryptexContentScanTime;
    bool  _migratorRunning;
    unsigned long long  _numApplications;
    unsigned long long  _numPlugins;
    bool  _onlyCryptexContent;
    NSError * _rebuildError;
    unsigned short  _rebuildReasonFlags;
    unsigned long long  _systemContentSaveTime;
    unsigned long long  _systemContentScanTime;
    unsigned long long  _totalRebuildTime;
    bool  _userRequested;
}

- (void).cxx_destruct;
- (id)init;

@end

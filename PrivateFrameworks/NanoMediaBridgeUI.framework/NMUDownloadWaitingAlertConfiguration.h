
@interface NMUDownloadWaitingAlertConfiguration : NMUKeepLocalAlertConfiguration {
    unsigned long long  _reason;
}

@property (nonatomic) unsigned long long reason;

- (id)_downloadNowOnCellularActionWithOptions:(id)arg1;
- (id)_tryAgainWithOptions:(id)arg1;
- (id)initWithItemName:(id)arg1 status:(unsigned long long)arg2 downloadPauseReason:(unsigned long long)arg3 options:(id)arg4;
- (id)initWithModelObject:(id)arg1 status:(unsigned long long)arg2 downloadPauseReason:(unsigned long long)arg3 options:(id)arg4;
- (unsigned long long)reason;
- (void)setReason:(unsigned long long)arg1;

@end

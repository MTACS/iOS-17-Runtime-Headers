
@interface BYAnalyticsExpressRestore : NSObject {
    bool  _offeredBackup;
    bool  _paneShown;
    unsigned long long  _restoreChoice;
}

@property (nonatomic) bool offeredBackup;
@property (nonatomic) bool paneShown;
@property (nonatomic) unsigned long long restoreChoice;

- (id)eventPayload;
- (id)initWithAnalyticsManager:(id)arg1;
- (bool)offeredBackup;
- (bool)paneShown;
- (unsigned long long)restoreChoice;
- (void)setOfferedBackup:(bool)arg1;
- (void)setPaneShown:(bool)arg1;
- (void)setRestoreChoice:(unsigned long long)arg1;

@end

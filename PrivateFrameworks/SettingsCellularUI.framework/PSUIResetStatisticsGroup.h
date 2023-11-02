
@interface PSUIResetStatisticsGroup : NSObject {
    CHManager * _callHistoryManager;
    PSUICoreTelephonyDataCache * _dataCache;
    <PSUIResetStatisticsGroupDelegate> * _delegate;
    PSSpecifier * _enableStatisticsSpecifier;
    PSSpecifier * _groupSpecifier;
    PSConfirmationSpecifier * _resetButtonSpecifier;
}

@property (nonatomic, retain) CHManager *callHistoryManager;
@property (nonatomic, retain) PSUICoreTelephonyDataCache *dataCache;
@property (nonatomic) <PSUIResetStatisticsGroupDelegate> *delegate;
@property (nonatomic, retain) PSSpecifier *enableStatisticsSpecifier;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (nonatomic, retain) PSConfirmationSpecifier *resetButtonSpecifier;

- (void).cxx_destruct;
- (id)_createResetConfirmationAlertDict;
- (id)_lastUpdateDate;
- (void)_updateFooterText;
- (id)callHistoryManager;
- (void)clearStats;
- (void)clearStatsPressed:(id)arg1;
- (void)createSpecifiers;
- (id)dataCache;
- (id)delegate;
- (id)enableStatisticsSpecifier;
- (id)getLogger;
- (id)groupSpecifier;
- (id)initWithDataCache:(id)arg1 callHistoryManager:(id)arg2 delegate:(id)arg3;
- (id)resetButtonSpecifier;
- (void)setCallHistoryManager:(id)arg1;
- (void)setDataCache:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableStatisticsSpecifier:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setResetButtonSpecifier:(id)arg1;
- (void)setStatsEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)statsEnabled:(id)arg1;

@end

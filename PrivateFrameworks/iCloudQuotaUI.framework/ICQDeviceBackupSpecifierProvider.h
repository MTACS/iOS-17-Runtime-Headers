
@interface ICQDeviceBackupSpecifierProvider : NSObject <AAUISpecifierProvider, DelayedPushDelegate> {
    ACAccount * _account;
    id  _backupChangesNotificationObserver;
    ICQBackupInfo * _backupInfo;
    <AAUISpecifierProviderDelegate> * _delegate;
    bool  _isBackupRequestInProgress;
    PSListController<AAUISpecifierProviderDelegate> * _listController;
    NSArray * _specifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backupDevicesSpecififers:(id)arg1;
- (void)_fetchBackupInfo;
- (void)_reloadSpecifiers;
- (id)_specifierForSpinner;
- (void)_startObservingBackupChanges;
- (id)_valueForBackUpDevice:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccount:(id)arg1 presenter:(id)arg2;
- (id)initWithAccountManager:(id)arg1;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadStarted:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end

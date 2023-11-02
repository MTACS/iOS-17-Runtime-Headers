
@interface DMCRFMBSnapshotSource : NSObject <DMCRFSnapshotSource> {
    MBManager * _mobileBackup;
    NSString * _personaIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    DMCRFMBRestoreDelegate * _restoreDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DMCRFSnapshotSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MBManager *mobileBackup;
@property (nonatomic, copy) NSString *personaIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) DMCRFMBRestoreDelegate *restoreDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)fetchAppBundleIDsForSnapshot:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRestorableSnapshotsWithCompletion:(id /* block */)arg1;
- (id)initWithPersonaIdentifier:(id)arg1 delegate:(id)arg2;
- (id)mobileBackup;
- (id)personaIdentifier;
- (id)queue;
- (id)restoreDelegate;
- (void)setDelegate:(id)arg1;
- (void)setMobileBackup:(id)arg1;
- (void)setPersonaIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRestoreDelegate:(id)arg1;
- (bool)startRestoreForSnapshot:(id)arg1 excludingAppBundleIdentifiers:(id)arg2 completion:(id /* block */)arg3;

@end

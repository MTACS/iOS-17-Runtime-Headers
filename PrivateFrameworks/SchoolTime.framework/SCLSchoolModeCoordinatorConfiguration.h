
@interface SCLSchoolModeCoordinatorConfiguration : NSObject <NSCopying> {
    NRDevice * _NRDevice;
    NSURL * _directoryURL;
    SCLUnlockHistoryPersistentStore * _historyStore;
    IDSDevice * _idsDevice;
    bool  _manuallyManagedOnly;
    bool  _sendsRemoteHistoryItems;
    bool  _sendsRemoteScheduleSettings;
    SCLSchoolModeServer * _server;
    NSObject<OS_dispatch_queue> * _targetQueue;
    SCLTransportController * _transportController;
}

@property (nonatomic, retain) NRDevice *NRDevice;
@property (nonatomic, retain) NSURL *directoryURL;
@property (nonatomic, retain) SCLUnlockHistoryPersistentStore *historyStore;
@property (nonatomic, retain) IDSDevice *idsDevice;
@property (getter=isManuallyManagedOnly, nonatomic) bool manuallyManagedOnly;
@property (nonatomic) bool sendsRemoteHistoryItems;
@property (nonatomic) bool sendsRemoteScheduleSettings;
@property (nonatomic, retain) SCLSchoolModeServer *server;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, retain) SCLTransportController *transportController;

- (void).cxx_destruct;
- (id)NRDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)directoryURL;
- (id)historyStore;
- (id)idsDevice;
- (bool)isManuallyManagedOnly;
- (bool)sendsRemoteHistoryItems;
- (bool)sendsRemoteScheduleSettings;
- (id)server;
- (void)setDirectoryURL:(id)arg1;
- (void)setHistoryStore:(id)arg1;
- (void)setIdsDevice:(id)arg1;
- (void)setManuallyManagedOnly:(bool)arg1;
- (void)setNRDevice:(id)arg1;
- (void)setSendsRemoteHistoryItems:(bool)arg1;
- (void)setSendsRemoteScheduleSettings:(bool)arg1;
- (void)setServer:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setTransportController:(id)arg1;
- (id)targetQueue;
- (id)transportController;

@end


@interface BDSLiverpoolStatusMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _containerQueue;
    <BDSLiverpoolStatusChangeObserving> * _coordinatingObserver;
    BDSICloudIdentityToken * _currentICloudIdentityToken;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BDSICloudIdentityToken * _lastArchivedICloudIdentityToken;
    BDSICloudIdentityToken * _lastArchivedNonNilICloudIdentityToken;
    bool  _lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSHashTable * _observers;
    bool  _optedIn;
    bool  _optedInKnown;
    int  _tccNotifyToken;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *containerQueue;
@property (nonatomic) <BDSLiverpoolStatusChangeObserving> *coordinatingObserver;
@property (nonatomic, copy) BDSICloudIdentityToken *currentICloudIdentityToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly, copy) BCICloudIdentityToken *iCloudIdentityToken;
@property (nonatomic, copy) BDSICloudIdentityToken *lastArchivedICloudIdentityToken;
@property (nonatomic, copy) BDSICloudIdentityToken *lastArchivedNonNilICloudIdentityToken;
@property (nonatomic) bool lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) bool optedIn;
@property (nonatomic) bool optedInKnown;
@property (nonatomic) int tccNotifyToken;
@property (nonatomic, readonly) bool userIdentityPreviouslyRecordedOnThisDevice;

+ (id)makeOSStateHandler;

- (void).cxx_destruct;
- (void)_notifyObserversWithCurrentToken:(id)arg1 lastToken:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)containerQueue;
- (id)coordinatingObserver;
- (id)currentICloudIdentityToken;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (void)dq_archiveCurrentICloudIdentityToken;
- (bool)dq_isCloudKitEnabled;
- (void)dq_refreshICloudAvailabilityStatus;
- (id)iCloudIdentityToken;
- (id)init;
- (bool)isCloudKitEnabled;
- (id)lastArchivedICloudIdentityToken;
- (id)lastArchivedNonNilICloudIdentityToken;
- (bool)lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
- (id)notifyQueue;
- (id)observers;
- (bool)optedIn;
- (bool)optedInKnown;
- (void)p_iCloudIdentityDidChange:(id)arg1;
- (void)refreshICloudTokensAndUpdateWithOptedIn:(bool)arg1;
- (void)registerCoordinatingObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)restartObserving;
- (void)setContainerQueue:(id)arg1;
- (void)setCoordinatingObserver:(id)arg1;
- (void)setCurrentICloudIdentityToken:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setLastArchivedICloudIdentityToken:(id)arg1;
- (void)setLastArchivedNonNilICloudIdentityToken:(id)arg1;
- (void)setLastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch:(bool)arg1;
- (void)setNotifyQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOptedIn:(bool)arg1;
- (void)setOptedInKnown:(bool)arg1;
- (void)setTccNotifyToken:(int)arg1;
- (int)tccNotifyToken;
- (void)updateWithOptedIn:(bool)arg1;
- (bool)userIdentityPreviouslyRecordedOnThisDevice;

@end

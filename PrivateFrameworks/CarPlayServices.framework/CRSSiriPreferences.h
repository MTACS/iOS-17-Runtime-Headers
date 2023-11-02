
@interface CRSSiriPreferences : NSObject {
    bool  _autoSendInCarPlayEnabled;
    bool  _autoSendInHeadphonesEnabled;
    bool  _cachedAnnounceNotificationsInCarPlayTemporarilyDisabled;
    bool  _cachedAutoSendInCarPlayEnabled;
    bool  _cachedAutoSendInHeadphonesEnabled;
    long long  _cachedCarPlayAnnounceEnablementType;
    bool  _cachedMainAutoSendEnabled;
    bool  _cachedShowAppsBehindSiriInCarPlayEnabled;
    bool  _mainAutoSendEnabled;
    CARObserverHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _showAppsBehindSiriInCarPlayEnabled;
}

@property (nonatomic) bool announceNotificationsInCarPlayTemporarilyDisabled;
@property (nonatomic) bool autoSendInCarPlayEnabled;
@property (nonatomic) bool autoSendInHeadphonesEnabled;
@property (nonatomic) bool cachedAnnounceNotificationsInCarPlayTemporarilyDisabled;
@property (nonatomic) bool cachedAutoSendInCarPlayEnabled;
@property (nonatomic) bool cachedAutoSendInHeadphonesEnabled;
@property (nonatomic) long long cachedCarPlayAnnounceEnablementType;
@property (nonatomic) bool cachedMainAutoSendEnabled;
@property (nonatomic) bool cachedShowAppsBehindSiriInCarPlayEnabled;
@property (nonatomic) long long carPlayAnnounceEnablementType;
@property (nonatomic) bool mainAutoSendEnabled;
@property (nonatomic, readonly) CARObserverHashTable *observers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool showAppsBehindSiriInCarPlayEnabled;

- (void).cxx_destruct;
- (void)_siriPreferencesDidChange;
- (void)_updateAnnounceNotificationsInCarPlayTemporarilyDisabled:(bool)arg1;
- (void)_updateAutoSendInCarPlayEnabled:(bool)arg1;
- (void)_updateAutoSendInHeadphonesEnabled:(bool)arg1;
- (void)_updateCarPlayAnnounceEnablementType:(long long)arg1;
- (void)_updateMainAutoSendEnabled:(bool)arg1;
- (void)_updateShowAppsBehindSiriInCarPlayEnabled:(bool)arg1;
- (void)addObserver:(id)arg1;
- (bool)announceNotificationsInCarPlayTemporarilyDisabled;
- (bool)autoSendInCarPlayEnabled;
- (bool)autoSendInHeadphonesEnabled;
- (bool)cachedAnnounceNotificationsInCarPlayTemporarilyDisabled;
- (bool)cachedAutoSendInCarPlayEnabled;
- (bool)cachedAutoSendInHeadphonesEnabled;
- (long long)cachedCarPlayAnnounceEnablementType;
- (bool)cachedMainAutoSendEnabled;
- (bool)cachedShowAppsBehindSiriInCarPlayEnabled;
- (long long)carPlayAnnounceEnablementType;
- (void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;
- (id)init;
- (bool)mainAutoSendEnabled;
- (id)observers;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(bool)arg1;
- (void)setAutoSendInCarPlayEnabled:(bool)arg1;
- (void)setAutoSendInHeadphonesEnabled:(bool)arg1;
- (void)setCachedAnnounceNotificationsInCarPlayTemporarilyDisabled:(bool)arg1;
- (void)setCachedAutoSendInCarPlayEnabled:(bool)arg1;
- (void)setCachedAutoSendInHeadphonesEnabled:(bool)arg1;
- (void)setCachedCarPlayAnnounceEnablementType:(long long)arg1;
- (void)setCachedMainAutoSendEnabled:(bool)arg1;
- (void)setCachedShowAppsBehindSiriInCarPlayEnabled:(bool)arg1;
- (void)setCarPlayAnnounceEnablementType:(long long)arg1;
- (void)setMainAutoSendEnabled:(bool)arg1;
- (void)setShowAppsBehindSiriInCarPlayEnabled:(bool)arg1;
- (bool)showAppsBehindSiriInCarPlayEnabled;

@end

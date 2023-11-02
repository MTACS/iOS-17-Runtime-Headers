
@interface _MPCQueueControllerBehaviorMusicTransportableExtension : NSObject <MPCPlaybackAccountManagerObserver, MPCQueueControllerBehaviorTransportableExtension> {
    NSArray * _accounts;
    NSArray * _allKnownSessionInfos;
    NSDictionary * _sessionInfoMap;
    <MPCQueueControllerSessionTypesInvalidatable> * _sessionTypesInvalidatable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MPCQueueControllerSessionTypesInvalidatable> *sessionTypesInvalidatable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateAllKnownSessionInfosForAccounts:(id)arg1;
- (void)accountManager:(id)arg1 didChangeAccounts:(id)arg2;
- (id)allKnownSessionTypes;
- (id)infoForSessionType:(id)arg1;
- (id)initWithInvalidatable:(id)arg1;
- (bool)isSupportedSessionType:(id)arg1 reason:(id*)arg2;
- (id)sessionTypesInvalidatable;

@end

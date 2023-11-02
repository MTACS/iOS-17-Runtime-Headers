
@interface BLTSectionInfoObserver : NSObject <BBObserverDelegate> {
    <BLTSectionInfoObserverDelegate> * _delegate;
    BBObserver * _observer;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _reloadSectionInfoCompletion;
    BBSettingsGateway * _settingsGateway;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSectionInfoObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getUniversalSectionIDs:(id)arg1 sectionIDEnumerator:(id)arg2 completion:(id /* block */)arg3;
- (void)_reloadSectionInfosWithCompletion:(id /* block */)arg1;
- (void)_settingsGatewayReconnected:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithSettingsGateway:(id)arg1;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(bool)arg2;
- (void)observer:(id)arg1 removeSection:(id)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)reloadWithCompletion:(id /* block */)arg1;
- (id)sectionInfoForSectionID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateSectionInfoBySectionIDs:(id)arg1 completion:(id /* block */)arg2;

@end

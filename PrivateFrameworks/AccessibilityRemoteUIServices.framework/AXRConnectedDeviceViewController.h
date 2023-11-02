
@interface AXRConnectedDeviceViewController : UIViewController <AXRDeviceActionsViewControllerDelegate, AXRVoiceOverTouchPadViewDelegate, AXRemoteDeviceConnectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    AXRActionsCollectionView * _actionsCollectionView;
    AXRemoteDevice * _activeDevice;
    UICollectionViewFlowLayout * _collectionViewFlowLayout;
    AXEventProcessor * _eventProcessor;
    NSObject<OS_dispatch_queue> * _eventSenderQueue;
    NSArray * _remoteActionsToShow;
}

@property (nonatomic, retain) AXRActionsCollectionView *actionsCollectionView;
@property (nonatomic, retain) AXRemoteDevice *activeDevice;
@property (nonatomic, retain) UICollectionViewFlowLayout *collectionViewFlowLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXEventProcessor *eventProcessor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *remoteActionsToShow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_dismissCurrentPresentedViewController;
- (void)_moreButtonPressed;
- (void)_performDeviceRemoteAction:(id)arg1;
- (id)actionsCollectionView;
- (void)actionsViewController:(id)arg1 selectedAction:(id)arg2;
- (id)activeDevice;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewFlowLayout;
- (void)dealloc;
- (id)eventProcessor;
- (id)initWithRemoteDevice:(id)arg1;
- (id)remoteActionsToShow;
- (void)remoteDeviceDidUnexpectedlyDisconnect:(id)arg1;
- (void)setActionsCollectionView:(id)arg1;
- (void)setActiveDevice:(id)arg1;
- (void)setCollectionViewFlowLayout:(id)arg1;
- (void)setEventProcessor:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)voiceOverTouchPadView:(id)arg1 didReceiveCommand:(id)arg2;

@end


@interface HUMediaAccessoryAudioSettingsViewController : HUItemTableViewController <HUDetailsPresentationDelegateHost, HUHomePodDetailViewDelegate, HUHomePodStereoSwapperCellDelegate> {
    NAFuture * _accessoryIdentifyFuture;
    HFMediaSystemBuilder * _mediaSystemBuilder;
    <HUPresentationDelegate> * _presentationDelegate;
    bool  _requiresPresentingViewControllerDismissal;
}

@property (nonatomic, retain) NAFuture *accessoryIdentifyFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUMediaAccessoryAudioSettingsItemManager *itemManager;
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) bool requiresPresentingViewControllerDismissal;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_homePodStereoSwapperCell;
- (void)_updateSwapperCell:(id)arg1;
- (id)accessoryIdentifyFuture;
- (bool)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)didPressSwapButton:(id)arg1;
- (void)didTapSpeaker:(id)arg1;
- (id)initWithMediaSystemBuilder:(id)arg1 mediaAccessoryItem:(id)arg2;
- (id)item;
- (id)mediaSystemBuilder;
- (id)presentationDelegate;
- (bool)requiresPresentingViewControllerDismissal;
- (void)setAccessoryIdentifyFuture:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setRequiresPresentingViewControllerDismissal:(bool)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end

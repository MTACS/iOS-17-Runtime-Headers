
@interface HUPlaybackInfluencesViewController : HUItemTableViewController <HFItemManagerDelegate, HUAccessorySettingsDetailsViewControllerProtocol, HUSwitchCellDelegate, UITextViewDelegate> {
    HUPlaybackInfluencesItemManager * _playbackInfluencesItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUPlaybackInfluencesItemManager *playbackInfluencesItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)dismissPrivacyController;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (id)playbackInfluencesItemManager;
- (void)setPlaybackInfluencesItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end

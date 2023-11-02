
@interface HULockCategorySettingsViewController : HUItemCollectionViewController <UITextViewDelegate> {
    HULockCategorySettingsItemManager * _lockSettingsItemManager;
    HFPinCodeManager * _pinCodeManager;
    HFUserNotificationServiceTopic * _topic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HULockCategorySettingsItemManager *lockSettingsItemManager;
@property (nonatomic, retain) HFPinCodeManager *pinCodeManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFUserNotificationServiceTopic *topic;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)initWithLockTopic:(id)arg1 home:(id)arg2;
- (id)initWithLockTopic:(id)arg1 pinCodeManager:(id)arg2 home:(id)arg3;
- (id)lockSettingsItemManager;
- (id)pinCodeManager;
- (void)setLockSettingsItemManager:(id)arg1;
- (void)setPinCodeManager:(id)arg1;
- (void)setTopic:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)topic;
- (void)viewDidLoad;

@end

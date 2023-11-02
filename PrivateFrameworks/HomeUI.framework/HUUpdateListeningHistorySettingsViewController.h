
@interface HUUpdateListeningHistorySettingsViewController : HUItemTableViewController <UITextViewDelegate> {
    HUUpdateListeningHistorySettingsItemModuleController * _moduleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUUpdateListeningHistorySettingsItemModuleController *moduleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)initWithUserItem:(id)arg1;
- (id)moduleController;
- (void)setModuleController:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end

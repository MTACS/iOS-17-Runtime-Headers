
@interface HUAccessorySettingsDataAnalyticsViewController : HUAccessorySettingsDetailsViewController <UITextViewDelegate> {
    UIView * _linkFooterView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *linkFooterView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dismissPrivacyController;
- (id)linkFooterView;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end

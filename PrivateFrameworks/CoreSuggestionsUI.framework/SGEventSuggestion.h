
@interface SGEventSuggestion : SGEventSuggestionBase <EKEventEditViewDelegate, EKEventViewDelegate, EKEventViewDelegatePrivate, EKICSPreviewControllerDelegate, SGSuggestionList> {
    EKICSPreviewController * _icsPreviewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissViewController:(id)arg1 retainBanner:(bool)arg2;
- (id)_icsDataEkEvent:(id)arg1;
- (bool)_isSourceAccountManaged;
- (void)_previewControllerForICSEvent:(id)arg1 eventStore:(id)arg2;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (void)icsPreviewControllerWantsDismissal:(id)arg1;
- (void)preloadPrimaryActionViewController;
- (id)suggestionAttributedSubtitle;
- (id)suggestionList;
- (bool)suggestionListSupportsDismissal;
- (id)suggestionPrimaryAction;

@end

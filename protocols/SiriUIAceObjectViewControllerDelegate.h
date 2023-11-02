
@protocol SiriUIAceObjectViewControllerDelegate <SiriUIBaseAceObjectViewControllerDelegate>

@required

- (NSArray *)additionalSpeechInterpretationsForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;
- (void)cancelRequestForSiriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1;
- (AFDataStore *)persistentDataStoreForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 setStatusViewHidden:(bool)arg2;
- (void)siriViewController:(id <SiriSharedUIViewControlling>)arg1 addSelectionResponse:(SAUIListItem *)arg2;
- (void)siriViewController:(id <SiriSharedUIViewControlling>)arg1 didHideVibrantView:(UIView *)arg2;
- (SiriUIDisambiguationItem *)siriViewController:(id <SiriSharedUIViewControlling>)arg1 disambiguationItemForListItem:(SAUIListItem *)arg2 disambiguationKey:(NSString *)arg3;
- (AceObject *)siriViewController:(id <SiriSharedUIViewControlling>)arg1 domainObjectForIdentifier:(NSURL *)arg2;
- (NSArray *)siriViewController:(id <SiriSharedUIViewControlling>)arg1 filteredDisambiguationListItems:(NSArray *)arg2;
- (SAUIListItem *)siriViewController:(id <SiriSharedUIViewControlling>)arg1 listItemToPickInAutodisambiguationForListItems:(NSArray *)arg2;
- (void)siriViewController:(id <SiriSharedUIViewControlling>)arg1 setContentOffset:(double)arg2;
- (void)siriViewController:(id <SiriSharedUIViewControlling>)arg1 setDomainObject:(AceObject *)arg2 forIdentifier:(NSURL *)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })siriViewControllerBackgroundInsets:(id <SiriSharedUIViewControlling>)arg1;
- (NSBundle *)siriViewControllerEffectiveBundleForCoreLocation:(id <SiriSharedUIViewControlling>)arg1;
- (double)siriViewControllerExpectedWidth:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriViewControllerHeightDidChange:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriViewControllerHeightDidChange:(id <SiriSharedUIViewControlling>)arg1 pinTopOfSnippet:(bool)arg2;
- (void)siriViewControllerViewDidAppear:(id <SiriSharedUIViewControlling>)arg1 isTopLevelViewController:(bool)arg2;
- (void)siriViewControllerViewDidDisappear:(id <SiriSharedUIViewControlling>)arg1 isTopLevelViewController:(bool)arg2;
- (struct CGSize { double x1; double x2; })siriViewControllerVisibleContentArea:(id <SiriSharedUIViewControlling>)arg1;
- (double)statusBarHeightForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;

@optional

- (bool)inTextInputModeForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;
- (bool)shouldEnableInteractionForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;
- (void)showCorrectionScreenForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriViewController:(id <SiriSharedUIViewControlling>)arg1 setTypeToSiriViewHidden:(bool)arg2;
- (void)siriViewControllerDidResignFirstResponder:(id <SiriSharedUIViewControlling>)arg1;
- (AFUserUtterance *)updatedUserUtteranceForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;

@end

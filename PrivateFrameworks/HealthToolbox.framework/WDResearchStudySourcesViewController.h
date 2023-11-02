
@interface WDResearchStudySourcesViewController : WDSourcesViewController <HKAdaptiveModalPresented>

+ (id)tableViewSectionClasses;

- (id)initWithProfile:(id)arg1 usingInsetStyling:(bool)arg2;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)viewDidLoad;

@end

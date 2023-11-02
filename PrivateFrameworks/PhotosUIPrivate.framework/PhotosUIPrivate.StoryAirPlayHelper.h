
@interface PhotosUIPrivate.StoryAirPlayHelper : NSObject <PHAirPlayControllerContentProvider, UIAdaptivePresentationControllerDelegate> {
    void airPlayContainerViewController;
    void airPlayStoryViewController;
    void pickerViewController;
    void presentingViewController;
}

- (void).cxx_destruct;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (id)init;
- (void)presentationControllerDidDismiss:(id)arg1;

@end

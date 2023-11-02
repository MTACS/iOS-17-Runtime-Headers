
@protocol SearchUIFirstTimeExperienceDelegate <NSObject>

@required

- (void)firstTimeExperienceContinueButtonPressed;

@optional

- (bool)firstTimeExperienceIsInPopoverPresentation;

@end

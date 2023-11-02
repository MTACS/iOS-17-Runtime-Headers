
@protocol HUConfigurationViewController <NSObject>

@required

- (<HUConfigurationViewControllerDelegate> *)delegate;
- (void)setDelegate:(id <HUConfigurationViewControllerDelegate>)arg1;

@optional

- (bool)isFinalStep;
- (void)setIsFinalStep:(bool)arg1;

@end


@interface TTRIContentUnavailableHostableViewController : UIViewController

@property (setter=ttr_setContentUnavailableConfiguration:, nonatomic, copy) TTRIContentUnavailableConfiguration *ttr_contentUnavailableConfiguration;
@property (nonatomic, readonly) TTRIContentUnavailableConfigurationState *ttr_contentUnavailableConfigurationState;

- (id)_contentUnavailableConfiguration;
- (id)_contentUnavailableConfigurationState;
- (void)_setContentUnavailableConfiguration:(id)arg1;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (id)ttr_contentUnavailableConfiguration;
- (id)ttr_contentUnavailableConfigurationState;
- (void)ttr_setContentUnavailableConfiguration:(id)arg1;
- (void)ttr_setNeedsUpdateContentUnavailableConfiguration;
- (void)ttr_updateContentUnavailableConfigurationUsingState:(id)arg1;

@end

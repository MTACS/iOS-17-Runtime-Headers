
@protocol PKAccountSupportTopicExplanationSectionControllerDelegate

@required

- (void)deselectCells;
- (void)openSupportLink:(PKAccountSupportTopicExplanationLink *)arg1;
- (bool)shouldShowSupportLink:(PKAccountSupportTopicExplanationLink *)arg1;

@end

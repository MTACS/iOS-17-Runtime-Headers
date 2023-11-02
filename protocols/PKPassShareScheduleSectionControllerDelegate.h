
@protocol PKPassShareScheduleSectionControllerDelegate

@required

- (void)didSelectEditEndDate;
- (void)didSelectEditStartDate;
- (void)reloadDataAnimated:(bool)arg1;
- (void)timeConfigurationDidChange:(PKPassShareTimeConfiguration *)arg1;

@end

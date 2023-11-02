
@protocol HLPHelpTopicViewControllerDelegate <NSObject>

@required

- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 failToLoadWithError:(NSError *)arg2;
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 topicLoaded:(HLPHelpTopicItem *)arg2;
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 traitCollectionChanged:(UITraitCollection *)arg2;
- (void)helpTopicViewControllerContentViewed:(HLPHelpTopicViewController *)arg1 topicID:(NSString *)arg2 topicTitle:(NSString *)arg3 source:(NSString *)arg4 interfaceStyle:(long long)arg5 fromTopicID:(NSString *)arg6 externalURLString:(NSString *)arg7;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(HLPHelpTopicViewController *)arg1;
- (void)helpTopicViewControllerDoneButtonTapped:(HLPHelpTopicViewController *)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(HLPHelpTopicViewController *)arg1;

@optional

- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 selectedHelpTopicItem:(HLPHelpTopicItem *)arg2;
- (void)helpTopicViewControllerTableOfContentButtonTapped:(HLPHelpTopicViewController *)arg1;

@end

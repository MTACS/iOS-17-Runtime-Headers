
@protocol HLPHelpTableOfContentViewControllerDelegate <NSObject>

@required

- (HLPHelpTopicItem *)currentHelpTopicItemForTableOfContentViewController:(HLPHelpTableOfContentViewController *)arg1;
- (void)tableOfContentViewController:(HLPHelpTableOfContentViewController *)arg1 showHelpTopicItem:(HLPHelpTopicItem *)arg2;
- (void)tableOfContentViewControllerSearchUsed:(HLPHelpTableOfContentViewController *)arg1;
- (void)tableOfContentViewControllerShowHelpBookInfo:(HLPHelpTableOfContentViewController *)arg1;

@end

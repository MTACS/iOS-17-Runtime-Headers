
@protocol ICTrackedAttributeDelegate

@required

- (void)textController:(ICTextController *)arg1 addedTrackedAttribute:(ICTrackedParagraph *)arg2;
- (void)textController:(ICTextController *)arg1 removedTrackedAttribute:(ICTrackedParagraph *)arg2;
- (void)textController:(ICTextController *)arg1 updatedTrackedAttribute:(ICTrackedParagraph *)arg2;

@end

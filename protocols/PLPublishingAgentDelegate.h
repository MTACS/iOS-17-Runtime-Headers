
@protocol PLPublishingAgentDelegate

@required

- (void)publishingAgentCancelButtonClicked:(PLPublishingAgent *)arg1;
- (void)publishingAgentDidBeginPublishing:(PLPublishingAgent *)arg1;
- (void)publishingAgentDidEndPublishing:(PLPublishingAgent *)arg1 error:(NSError *)arg2;
- (void)publishingAgentDoneButtonClicked:(PLPublishingAgent *)arg1;
- (void)publishingAgentWillBeDisplayed:(PLPublishingAgent *)arg1;

@optional

- (void)publishingAgentDidEndRemaking:(PLPublishingAgent *)arg1 didSucceed:(bool)arg2;
- (void)publishingAgentDidStartRemaking:(PLPublishingAgent *)arg1;

@end

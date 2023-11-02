
@interface WFRSSFeedAction : WFAction <MWFeedParserDelegate> {
    MWFeedParser * _parser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MWFeedParser *parser;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)feedParser:(id)arg1 didFailWithError:(id)arg2;
- (void)feedParser:(id)arg1 didParseFeedItem:(id)arg2;
- (void)feedParserDidFinish:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)getURLsFromInputWithCompletionHandler:(id /* block */)arg1;
- (id)parser;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setParser:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end

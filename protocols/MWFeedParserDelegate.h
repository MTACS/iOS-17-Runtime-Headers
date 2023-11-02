
@protocol MWFeedParserDelegate <NSObject>

@optional

- (void)feedParser:(MWFeedParser *)arg1 didFailWithError:(NSError *)arg2;
- (void)feedParser:(MWFeedParser *)arg1 didParseFeedInfo:(MWFeedInfo *)arg2;
- (void)feedParser:(MWFeedParser *)arg1 didParseFeedItem:(MWFeedItem *)arg2;
- (void)feedParserDidFinish:(MWFeedParser *)arg1;
- (void)feedParserDidStart:(MWFeedParser *)arg1;

@end

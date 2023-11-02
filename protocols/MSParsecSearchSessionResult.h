
@protocol MSParsecSearchSessionResult <NSObject>

@required

- (SFSearchResult *)feedbackResult;
- (NSString *)resultID;

@end

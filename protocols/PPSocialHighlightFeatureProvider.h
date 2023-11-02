
@protocol PPSocialHighlightFeatureProvider

@required

- (NSNumber *)valueForHighlight:(PPRankableSocialHighlight *)arg1;

@optional

- (id)applyFeedback:(BMStoreEvent *)arg1;

@end


@protocol TPFootnotePageDelegate

@required

- (bool)canHaveFootnotesFromPreviousTarget:(id <TSWPLayoutTarget>)arg1;
- (bool)isFootnoteContainerOnSamePageAsTarget:(id <TSWPLayoutTarget>)arg1;

@end

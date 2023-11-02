
@protocol SLHighlightCacheDelegate <NSObject>

@required

- (NSString *)appIdentifierForHighlightsCache;
- (void)highlightsChanged;
- (void)legacyDidAddHighlights;
- (void)legacyDidRemoveHighlights:(NSArray *)arg1;
- (NSString *)variantForHighlightsCache;

@end

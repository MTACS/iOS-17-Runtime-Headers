
@protocol GEOCompletionGroup <NSObject>

@required

- (bool)enableMapsSuggestServerReranking;
- (bool)enforceServerResultsOrder;
- (NSArray *)excludedClientResultTypes;
- (NSArray *)includedClientResultTypes;
- (bool)isSectionForClientOnlyResults;
- (NSArray *)items;
- (NSString *)localizedSectionHeader;
- (bool)shouldInterleaveClientResults;

@end

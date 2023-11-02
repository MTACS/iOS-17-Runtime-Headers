
@protocol ATXSuggestedPagesStackLayout

@required

- (void)layOutStacks:(NSArray *)arg1 numberOfColumns:(unsigned long long)arg2 forPageType:(long long)arg3;
- (NSArray *)makeStacksFromWidgets:(NSArray *)arg1 pageType:(long long)arg2 environment:(id <ATXSuggestedSpacesEnvironment>)arg3;
- (unsigned long long)maxAllowableStacksForPageType:(long long)arg1;
- (unsigned long long)maxAppRowsForPageType:(long long)arg1;
- (unsigned long long)minNecessaryLeafIconsForPageType:(long long)arg1;

@end

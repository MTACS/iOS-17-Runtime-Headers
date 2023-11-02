
@interface ATXSuggestedPagesStackLayoutSmallSpiral : NSObject <ATXSuggestedPagesStackLayout>

- (void)layOutStacks:(id)arg1 numberOfColumns:(unsigned long long)arg2 forPageType:(long long)arg3;
- (id)makeStacksFromWidgets:(id)arg1 pageType:(long long)arg2 environment:(id)arg3;
- (unsigned long long)maxAllowableStacksForPageType:(long long)arg1;
- (unsigned long long)maxAppRowsForPageType:(long long)arg1;
- (unsigned long long)minNecessaryLeafIconsForPageType:(long long)arg1;

@end

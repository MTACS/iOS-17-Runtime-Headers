
@protocol PXVKImageAnalysis <NSObject>

@required

- (bool)hasDataDetectors;
- (bool)hasResultsForPXVKAnalysisTypes:(unsigned long long)arg1;
- (bool)hasTexts;
- (bool)hasVisualSearchResults;
- (NSArray *)resultItems;

@end


@protocol PXStoryMovieHighlightsCollection

@required

- (long long)count;
- (NSString *)diagnosticDescription;
- (<PXStoryMovieHighlightCuration> *)movieHighlightsForDisplayAsset:(id <PXDisplayAsset>)arg1;

@end

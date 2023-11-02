
@protocol PXStoryMovieHighlightCuration <NSObject>

@required

- (<PXStoryMovieHighlight> *)bestHighlight;
- (<PXStoryMovieHighlight> *)defaultHighlight;
- (<PXStoryMovieHighlight> *)fullMovie;
- (NSArray *)highlights;
- (<PXStoryMovieHighlight> *)livePhoto;
- (<PXStoryMovieHighlight> *)movieSummary;

@end

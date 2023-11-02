
@interface PXStoryMediaAnalysisMovieHighlightCuration : NSObject <PXStoryMovieHighlightCuration> {
    NSDictionary * _analysis;
}

@property (nonatomic, readonly) <PXStoryMovieHighlight> *bestHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PXStoryMovieHighlight> *defaultHighlight;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXStoryMovieHighlight> *fullMovie;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *highlights;
@property (nonatomic, readonly) <PXStoryMovieHighlight> *livePhoto;
@property (nonatomic, readonly) <PXStoryMovieHighlight> *movieSummary;
@property (readonly) Class superclass;

+ (id)movieHighlightCurationsFromMediaAnalysisResults:(id)arg1;

- (void).cxx_destruct;
- (id)bestHighlight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultHighlight;
- (id)description;
- (id)fullMovie;
- (id)highlights;
- (id)init;
- (id)initWithMediaAnalysis:(id)arg1;
- (id)livePhoto;
- (id)movieSummary;

@end

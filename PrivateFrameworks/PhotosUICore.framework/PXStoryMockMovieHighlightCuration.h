
@interface PXStoryMockMovieHighlightCuration : NSObject <PXStoryMovieHighlightCuration> {
    <PXStoryMovieHighlight> * _fallback;
    NSArray * _highlights;
    <PXStoryMovieHighlight> * _live;
    <PXStoryMovieHighlight> * _movie;
    <PXStoryMovieHighlight> * _summary;
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

- (void).cxx_destruct;
- (id)bestHighlight;
- (id)defaultHighlight;
- (id)description;
- (id)fullMovie;
- (id)highlights;
- (id)init;
- (id)initWithFullMovie:(id)arg1;
- (id)initWithHighlights:(id)arg1 fallback:(id)arg2 summary:(id)arg3 live:(id)arg4 full:(id)arg5;
- (id)initWithLivePhoto:(id)arg1;
- (id)initWithMovieHighlights:(id)arg1;
- (id)initWithMovieSummary:(id)arg1;
- (id)livePhoto;
- (id)movieSummary;

@end

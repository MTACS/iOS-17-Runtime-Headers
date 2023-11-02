
@protocol APPCMediaMetricsHelping

@required

- (void)mediaContractedAtPosition:(double)arg1 fullScreen:(bool)arg2;
- (void)mediaExpandedAtPosition:(double)arg1 fullScreen:(bool)arg2;
- (void)mediaFinished;
- (void)mediaLoaded;
- (void)mediaPausedAtPosition:(double)arg1;
- (void)mediaPlayedAtPosition:(double)arg1;
- (void)mediaProgress:(long long)arg1;
- (void)mediaShowControlsAtPosition:(double)arg1;
- (void)mediaSkippedAtPosition:(double)arg1;
- (void)mediaStarted;
- (void)mediaUserExitedArticle;
- (void)mediaVolumeChangedAtPosition:(double)arg1 volume:(float)arg2;
- (void)setVisiblePercentage:(long long)arg1;
- (void)setVisiblePercentageChanged:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, void*
- (void)videoChosen;
- (void)videoChosenWithVideoWidth:(float)arg1 videoHeight:(float)arg2;
- (long long)visiblePercentage;
- (id /* block */)visiblePercentageChanged:(void *)arg1; // needs 1 arg types, found 6: id /* block */, long long, long long, void*, id, SEL

@end


@interface PXStorySongsAutoEditDecisionListsProducer : NSObject <PXStoryAutoEditDecisionListsProducer, PXVisualDiagnosticsProvider> {
    <PXDisplayAssetCollection> * _assetCollection;
    <PXStoryChapterCollection> * _chapterCollection;
    PXStoryAutoEditClipComposabilityProvider * _composabilityProvider;
    PFStoryAutoEditConfiguration * _configuration;
    <PXDisplayAssetFetchResult> * _displayAssets;
    NSArray * _lastGeneratedAutoEditDecisionLists;
    NSObject<OS_os_log> * _log;
    PXStoryAutoEditMomentsProvider * _momentsProvider;
    <PXStoryMovieHighlightsCollection> * _movieHighlights;
    NSObject<OS_dispatch_queue> * _queue;
    <PFRandomNumberGenerator> * _randomNumberGenerator;
    PXStoryConfiguration * _storyConfiguration;
    struct { 
        long long kind; 
        struct { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } minimumDuration; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } preferredDuration; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } maximumDuration; 
        } specificDurationInfo; 
    }  _targetOverallDurationInfo;
    NSMutableArray * _ttrUnitTestsForFailedDurationConstraints;
}

@property (nonatomic, readonly) <PXStoryChapterCollection> *chapterCollection;
@property (nonatomic, retain) PXStoryAutoEditClipComposabilityProvider *composabilityProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *displayAssets;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXStoryAutoEditMomentsProvider *momentsProvider;
@property (nonatomic, readonly) <PXStoryMovieHighlightsCollection> *movieHighlights;
@property (nonatomic, readonly) PXStoryConfiguration *storyConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; } targetOverallDurationInfo;

+ (struct { long long x1; long long x2; })audioModeDecisionForAsset:(id)arg1 minimumAudioScore:(float)arg2 playbackStyle:(long long)arg3 movieHighlight:(id)arg4;

- (void).cxx_destruct;
- (void)_addComposabilityGraph:(id)arg1;
- (void)_addMomentsGraph:(id)arg1;
- (void)_addTimeConstraintGraph:(id)arg1;
- (void)_adjustAudioPlaybackForClips:(id)arg1;
- (void)_adjustAudioTransitionForClips:(id)arg1;
- (void)_adjustDurationOfClips:(id)arg1 forSongPace:(long long)arg2;
- (void)_adjustTransitionsInClips:(id)arg1 forChapterCollection:(id)arg2;
- (void)_audioCutsFromClip:(id)arg1 toClip:(id)arg2 useJCut:(bool*)arg3 useLCut:(bool*)arg4;
- (bool)_canOverlapAudioFromClip:(id)arg1 withNextClip:(id)arg2;
- (bool)_canOverlapAudioFromClip:(id)arg1 withPreviousClip:(id)arg2;
- (void)_composeClips:(id)arg1 forSongPace:(long long)arg2;
- (unsigned long long)_composeClips:(id)arg1 inAssetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_decisionListForSong:(id)arg1 pace:(long long)arg2 colorGradeCategory:(id)arg3;
- (id)_diagnosticTextForAutoEditHUDAtDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (id)_diagnosticTextForComposabilityHUDAtDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (id)_diagnosticTextForMomentsHUDAtDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })_durationInfoForClip:(id)arg1 durationMultiplier:(double)arg2 songPace:(long long)arg3 transitionIn:(double*)arg4 transitionOut:(double*)arg5;
- (id)_indexesOfClips:(id)arg1 atChapterBeginningInChapterCollection:(id)arg2;
- (id)_movieHighlightForAsset:(id)arg1 playbackStyle:(long long)arg2;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })_optimizeOverallDurationOfClips:(id)arg1 forSong:(id)arg2;
- (long long)_playbackStyleForAsset:(id)arg1 songPace:(long long)arg2;
- (void)_populateClips:(id)arg1 forSongPace:(long long)arg2 colorGradeCategory:(id)arg3;
- (void)_populateModulesInClips:(id)arg1;
- (void)_populateMomentRecipesInClips:(id)arg1 forSongPace:(long long)arg2 colorGradeCategory:(id)arg3;
- (void)_populateMotionStylesAndTransitionsInClips:(id)arg1 forSongPace:(long long)arg2 colorGradeCategory:(id)arg3;
- (void)_populateMotionStylesInClips:(id)arg1 forSongPace:(long long)arg2 colorGradeCategory:(id)arg3;
- (void)_populateTransitionsInClips:(id)arg1 forSongPace:(long long)arg2 colorGradeCategory:(id)arg3;
- (float)_volumeGainForAsset:(id)arg1 movieHighlight:(id)arg2 audioMode:(long long)arg3;
- (void)addVisualDiagnosticsToContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)chapterCollection;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)composabilityProvider;
- (id)debugQuickLookObject;
- (id)decisionListForSong:(id)arg1 pace:(long long)arg2 colorGradeCategory:(id)arg3;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (id)diagnosticsMomentsProvider;
- (id)displayAssets;
- (bool)handlesDiagnosticTextForHUDType:(long long)arg1;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 displayAssets:(id)arg2 movieHighlights:(id)arg3 chapterCollection:(id)arg4 targetOverallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg5 configuration:(id)arg6 storyConfiguration:(id)arg7;
- (id)momentsProvider;
- (id)movieHighlights;
- (id)requestAutoEditDecisionListsWithOptions:(unsigned long long)arg1 songs:(id)arg2 colorGradeCategoriesBySong:(id)arg3 resultHandler:(id /* block */)arg4;
- (id)requestDefaultAutoEditDecisionListsWithColorGradeCategory:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (void)setComposabilityProvider:(id)arg1;
- (void)setMomentsProvider:(id)arg1;
- (id)storyConfiguration;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })targetOverallDurationInfo;

@end

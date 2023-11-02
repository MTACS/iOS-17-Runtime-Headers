
@interface PXStoryResourcesDataSource : NSObject {
    <PXDisplayAssetCollection> * _assetCollection;
    <PXAudioAssetFetchResult> * _audioAssets;
    <PXDisplayAssetFetchResult> * _availableDisplayAssets;
    NSMutableDictionary * _cachedTextResources;
    <PXStoryChapterCollection> * _chapterCollection;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _chapterSubtitleTextResourceIndexes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _chapterTitleTextResourceIndexes;
    <PXStoryDisplayAssetCroppingContext> * _croppingContext;
    <PXStorySaliencyDataSource> * _detailedSaliency;
    <PXDisplayAssetFetchResult> * _displayAssets;
    long long  _identifier;
    long long  _initialDisplayAssetIndex;
    long long  _initialSubtitleTextResourceIndex;
    long long  _initialTitleTextResourceIndex;
    <PXDisplayAsset> * _keyAsset;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <PXStoryColorResource> * _lock_backgroundColorResource;
    <PXStoryMovieHighlightsCollection> * _movieHighlights;
    long long  _numberOfColorResources;
    long long  _numberOfTextResources;
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
    }  _overallDurationInfo;
}

@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) <PXAudioAssetFetchResult> *audioAssets;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *availableDisplayAssets;
@property (nonatomic, readonly) <PXStoryColorResource> *backgroundColorResource;
@property (nonatomic, readonly) <PXStoryChapterCollection> *chapterCollection;
@property (nonatomic, readonly) <PXStoryDisplayAssetCroppingContext> *croppingContext;
@property (nonatomic, readonly) <PXStorySaliencyDataSource> *detailedSaliency;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *displayAssets;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) long long initialSubtitleTextResourceIndex;
@property (nonatomic, readonly) long long initialTitleTextResourceIndex;
@property (nonatomic, readonly) <PXDisplayAsset> *keyAsset;
@property (nonatomic, readonly) <PXStoryDisplayAssetResource> *keyAssetResource;
@property (nonatomic, readonly) <PXStoryMovieHighlightsCollection> *movieHighlights;
@property (nonatomic, readonly) long long numberOfColorResources;
@property (nonatomic, readonly) long long numberOfDisplayAssetResources;
@property (nonatomic, readonly) long long numberOfFrameFillingEffectResources;
@property (nonatomic, readonly) long long numberOfSongResources;
@property (nonatomic, readonly) long long numberOfTextResources;
@property (nonatomic, readonly) struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; } overallDurationInfo;

- (void).cxx_destruct;
- (id)_createTextResourceAtIndex:(long long)arg1;
- (id)assetCollection;
- (id)audioAssets;
- (id)availableDisplayAssets;
- (id)backgroundColorResource;
- (id)chapterCollection;
- (id)colorResourceAtIndex:(long long)arg1;
- (id)croppingContext;
- (id)detailedSaliency;
- (id)displayAssetResourceAtIndex:(long long)arg1;
- (id)displayAssets;
- (void)enumerateTitleTextResourcesForDisplayAssetResourceAtIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)frameFillingEffectResourceAtIndex:(long long)arg1;
- (bool)hasSameResourcesOfKind:(long long)arg1 as:(id)arg2;
- (long long)identifier;
- (long long)indexForDisplayAssetReference:(id)arg1;
- (id)initWithKeyAsset:(id)arg1 displayAssets:(id)arg2 availableDisplayAssets:(id)arg3 movieHighlights:(id)arg4 detailedSaliency:(id)arg5 chapterCollection:(id)arg6 audioAssets:(id)arg7 assetCollection:(id)arg8 overallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg9 storyConfiguration:(id)arg10;
- (id)initWithStoryConfiguration:(id)arg1;
- (long long)initialSubtitleTextResourceIndex;
- (long long)initialTitleTextResourceIndex;
- (id)keyAsset;
- (id)keyAssetResource;
- (id)movieHighlights;
- (id)movieHighlightsForDisplayAssetAtIndex:(long long)arg1;
- (long long)numberOfColorResources;
- (long long)numberOfDisplayAssetResources;
- (long long)numberOfFrameFillingEffectResources;
- (long long)numberOfResourcesWithKind:(long long)arg1;
- (long long)numberOfSongResources;
- (long long)numberOfTextResources;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })overallDurationInfo;
- (id)resourceWithKind:(long long)arg1 atIndex:(long long)arg2;
- (id)songResourceAtIndex:(long long)arg1;
- (id)textResourceAtIndex:(long long)arg1;

@end

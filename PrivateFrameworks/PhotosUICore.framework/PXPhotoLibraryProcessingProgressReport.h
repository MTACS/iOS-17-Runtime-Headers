
@interface PXPhotoLibraryProcessingProgressReport : NSObject

+ (id)_highlightEnrichmentProgressDescription:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; double x7; double x8; })arg1;
+ (id)_processingProgressDescription:(struct { long long x1; long long x2; long long x3; long long x4; double x5; double x6; double x7; })arg1;
+ (id)_syndicationProgressDescription:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; })arg1;
+ (id)colorForComplete;
+ (id)colorForDefault;
+ (id)colorForNotEnriched;
+ (id)colorForPartial;
+ (id)colorForSceneComplete;
+ (id)highlightEnrichmentProgressImageWithProgressReport:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; double x7; double x8; })arg1;
+ (void)requestBriefDescriptionForLibrary:(id)arg1 resultBlock:(id /* block */)arg2;
+ (void)requestFullDescriptionForLibrary:(id)arg1 resultBlock:(id /* block */)arg2;
+ (id)syndicationProgressImageWithProgressReport:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; })arg1;

@end

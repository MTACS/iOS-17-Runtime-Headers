
@interface PNLibraryProcessingProgressProvider : NSObject

+ (struct { long long x1; long long x2; long long x3; double x4; double x5; })faceProcessingProgressForLibrary:(id)arg1;
+ (void)requestHighlightEnrichmentProgressForLibrary:(id)arg1 result:(id /* block */)arg2;
+ (void)requestProcessingProgressForLibrary:(id)arg1 result:(id /* block */)arg2;
+ (void)requestSyndicationProgressForLibrary:(id)arg1 result:(id /* block */)arg2;

@end


@interface PGGraphIngestRecipe : NSObject {
    NSArray * _highlightsToIngest;
    NSArray * _momentsToIngest;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) NSArray *highlightsToIngest;
@property (nonatomic, readonly) NSArray *momentsToIngest;

- (void).cxx_destruct;
- (id)_highlightsForLibraryAnalysis;
- (id)_momentsForLibraryAnalysis;
- (id)defaultPostprocessorsWithGraphBuilder:(id)arg1;
- (id)defaultPreprocessorsWithGraphBuilder:(id)arg1;
- (id)highlightsToIngest;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)momentsToIngest;
- (id)postprocessorsWithGraphBuilder:(id)arg1;
- (id)preprocessorsWithGraphBuilder:(id)arg1;

@end


@protocol MusicKit_SoftLinking_MPArtworkCatalog <NSObject>

@required

- (NSString *)musicKit_artworkDataSourceIdentifier;
- (NSString *)musicKit_artworkDataSourceShortDescription;
- (NSDictionary *)musicKit_artworkDictionary;
- (NSDictionary *)musicKit_artworkTokenParameters;
- (<MusicKit_SoftLinking_MPArtworkColorAnalysis> *)musicKit_existingColorAnalysis;
- (struct CGSize { double x1; double x2; })musicKit_fittingSize;
- (void)musicKit_requestColorAnalysisWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MusicKit_SoftLinking_MPArtworkColorAnalysis> *, void*
- (void)musicKit_requestImageDataWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)musicKit_setFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (NSString *)musicKit_visualIdenticalityIdentifier;

@end

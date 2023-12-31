
@protocol TSKExporter <NSObject>

@required

- (void)cancel;
- (bool)exportToURL:(NSURL *)arg1 delegate:(id <TSKImportExportDelegate>)arg2 error:(id*)arg3;
- (id)initWithDocumentRoot:(TSKDocumentRoot *)arg1;
- (bool)isCancelled;
- (TSUProgressContext *)progressContext;
- (void)quit;
- (void)setProgressContext:(TSUProgressContext *)arg1;

@optional

- (NSString *)documentSpecificTypeUTI;
- (NSString *)exportPathForOutputPath:(NSString *)arg1;
- (bool)isExportSupported;
- (bool)needsSupplementalFiles;
- (TSUProgress *)progress;
- (NSString *)savePanelMessage;
- (void)setBuildVersionHistory:(NSArray *)arg1;
- (void)setOptions:(NSDictionary *)arg1;
- (void)setQuickLookThumbnail:(TSUImage *)arg1;
- (void)setSaveToURL:(NSURL *)arg1;
- (void)setTypeUTI:(NSString *)arg1;
- (void)setUsePackageFormat:(bool)arg1;
- (NSString *)typeUTI;

@end

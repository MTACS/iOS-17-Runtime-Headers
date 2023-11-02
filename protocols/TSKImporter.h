
@protocol TSKImporter <NSObject>

@required

- (void)cancel;
- (bool)importToDocumentRoot:(TSKDocumentRoot *)arg1 delegate:(id <TSKImportExportDelegate>)arg2 error:(id*)arg3;
- (id)initWithURL:(NSURL *)arg1;
- (NSString *)initialTemplateName;
- (TSUProgressContext *)progressContext;
- (void)quit;
- (void)setProgressContext:(TSUProgressContext *)arg1;
- (void)setURL:(NSURL *)arg1;
- (bool)stylesheetUpdatesRequired;

@optional

+ (bool)instancesRespondToSelector:(SEL)arg1;

- (NSArray *)buildVersionHistory;
- (bool)importStartsWithThemeOnly;
- (unsigned long long)initialVariantIndex;
- (TSUImage *)obscuredProgressImage;
- (bool)postprocessRegularDocumentRoot:(TSKDocumentRoot *)arg1 delegate:(id <TSKImportExportDelegate>)arg2;
- (bool)shouldObscureFileExtension;
- (TSUImage *)thumbnailImage;
- (NSUUID *)uuidOfImportedDocument;
- (void)willStartThemeOnlyImportWithDocumentRoot:(TSKDocumentRoot *)arg1;

@end


@protocol MarkupViewControllerProtocol

@required

+ (NSArray *)supportedOutputTypes;

- (bool)allEditingDisabled;
- (AKController *)annotationController;
- (bool)annotationEditingEnabled;
- (void)cancel:(id)arg1;
- (UIViewController<MUContentViewControllerProtocol> *)contentViewController;
- (NSData *)createArchivedModelData;
- (NSData *)dataRepresentationEmbeddingSourceImageAndEditModel:(bool)arg1 error:(id*)arg2;
- (NSData *)dataRepresentationWithError:(id*)arg1;
- (void)documentDidCloseTeardown;
- (void)done:(id)arg1;
- (void)finalizeCrop;
- (bool)formFillingEnabled;
- (void)fullTeardown;
- (bool)isNavigationModeHorizontal;
- (bool)isThumbnailViewHidden;
- (bool)isToolbarHidden;
- (UINavigationBar *)navBar;
- (UTType *)outputContentType;
- (NSString *)outputType;
- (bool)pencilAlwaysDraws;
- (void)redo:(id)arg1;
- (void)revert;
- (void)setAllEditingDisabled:(bool)arg1;
- (void)setAnnotationEditingEnabled:(bool)arg1;
- (void)setData:(NSData *)arg1;
- (void)setData:(NSData *)arg1 withArchivedModelData:(NSData *)arg2;
- (void)setData:(NSData *)arg1 withArchivedModelData:(NSData *)arg2 placeholderImage:(UIImage *)arg3;
- (void)setFileURL:(NSURL *)arg1;
- (void)setFileURL:(NSURL *)arg1 withArchivedModelData:(NSData *)arg2;
- (void)setFileURL:(NSURL *)arg1 withArchivedModelData:(NSData *)arg2 placeholderImage:(UIImage *)arg3;
- (void)setFormFillingEnabled:(bool)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setImage:(UIImage *)arg1 withArchivedModelData:(NSData *)arg2;
- (void)setImage:(UIImage *)arg1 withArchivedModelData:(NSData *)arg2 placeholderImage:(UIImage *)arg3;
- (void)setNavBar:(UINavigationBar *)arg1;
- (void)setNavigationModeHorizontal:(bool)arg1;
- (void)setPencilAlwaysDraws:(bool)arg1;
- (void)setShowThumbnailViewForMultipage:(bool)arg1;
- (void)setThumbnailViewHidden:(bool)arg1;
- (void)setToolbarHidden:(bool)arg1;
- (void)setToolbarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setToolbarPosition:(long long)arg1;
- (bool)showThumbnailViewForMultipage;
- (UIView *)toolbar;
- (long long)toolbarPosition;
- (void)undo:(id)arg1;
- (bool)validateRedo:(id)arg1;
- (bool)validateUndo:(id)arg1;
- (void)willBeginLoadingNewDocument;
- (bool)writeToURL:(NSURL *)arg1 embeddingSourceImageAndEditModel:(bool)arg2 error:(id*)arg3;
- (bool)writeToURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)writeToURL:(NSURL *)arg1 options:(NSDictionary *)arg2 error:(id*)arg3;

@end

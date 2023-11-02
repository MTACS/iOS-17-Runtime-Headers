
@protocol PXStoryThumbnailActionPerformer

@required

- (void)deleteMemory;
- (void)featureLess:(NSString *)arg1;
- (void)fileRadar;
- (id /* block */)presentDetailsViewAction:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)presentPlayerAction:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)presentShareSheet;
- (void)presentTitleEditor;
- (void)setFavorite:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setPresentDetailsViewAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setPresentPlayerAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showVisualDiagnostics;

@end

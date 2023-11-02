
@interface PUStoryThumbnailActionPerformer : NSObject <PXStoryThumbnailActionPerformer> {
    void exportHelper;
    void model;
    void presentDetailsViewAction;
    void presentPlayerAction;
}

@property (nonatomic, copy) id /* block */ presentDetailsViewAction;
@property (nonatomic, copy) id /* block */ presentPlayerAction;

- (void).cxx_destruct;
- (void)deleteMemory;
- (void)featureLess:(id)arg1;
- (void)fileRadar;
- (id)init;
- (id)initWithModel:(id)arg1;
- (id /* block */)presentDetailsViewAction;
- (id /* block */)presentPlayerAction;
- (void)presentShareSheet;
- (void)presentTitleEditor;
- (void)setFavorite:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setPresentDetailsViewAction:(id /* block */)arg1;
- (void)setPresentPlayerAction:(id /* block */)arg1;
- (void)showVisualDiagnostics;

@end

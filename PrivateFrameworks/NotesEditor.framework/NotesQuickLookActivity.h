
@interface NotesQuickLookActivity : UIActivity <QLPreviewControllerDataSource, QLPreviewControllerDelegate> {
    NotesQuickLookActivityItem * _item;
    bool  _sourceIsManaged;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NotesQuickLookActivityItem *item;
@property (nonatomic) bool sourceIsManaged;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_beforeActivity;
- (void)_cleanup;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)item;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)presentPreviewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)setItem:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (bool)sourceIsManaged;

@end

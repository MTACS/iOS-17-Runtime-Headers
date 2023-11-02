
@interface NewsFeed.DebugFormatEditorViewController : UIViewController <UIScrollViewDelegate> {
    void $__lazy_storage_$_debuggerRunBarButtonItem;
    void $__lazy_storage_$_errorContainerController;
    void $__lazy_storage_$_overlayView;
    void backgroundView;
    void canvasViewController;
    void contentView;
    void delegate;
    void editor;
    void editorPathView;
    void editorToolbarItems;
    void errorViewController;
    void formatManager;
    void groupViewController;
    void lastLayoutBounds;
    void packages;
    void rulerView;
    void scrollView;
    void snapshotCanvasView;
    void statusView;
    void styler;
    void zoomLabel;
}

- (void).cxx_destruct;
- (void)doDevicesWithSender:(id)arg1;
- (void)doInterfaceLayoutDirection;
- (void)doLightDarkMode;
- (void)doOptions;
- (void)doReload;
- (void)doResetZoom;
- (void)doSnapshotWithSender:(id)arg1;
- (void)doStartStopDebugger;
- (void)doToggleConsoleDisplay;
- (void)doToggleSidebar;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end

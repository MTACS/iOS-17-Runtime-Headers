
@interface VideosUI.ContextMenuInteractor : NSObject {
    void currentContextMenuConfiguration;
    void currentMenuInteraction;
    void defaultPreviewCardWidth;
    void deferredMenuHandler;
    void delegate;
    void documentController;
    void downloadStateObservation;
    void downloads;
    void hasShownPreActionContextMenu;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  indexPath;
    void itemViewModels;
    void originatorViewModel;
    void preDocumentController;
    void presentingView;
    void previewController;
    void selectedViewModel;
}

- (void).cxx_destruct;
- (id)init;

@end

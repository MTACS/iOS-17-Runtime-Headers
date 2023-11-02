
@interface WKUSDPreviewView : WKApplicationStateTrackingView <ASVThumbnailViewDelegate, QLPreviewItemDataProvider, WKWebViewContentProvider> {
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  _data;
    struct RetainPtr<QLItem> { 
        void *m_ptr; 
    }  _item;
    struct RetainPtr<NSItemProvider> { 
        void *m_ptr; 
    }  _itemProvider;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _mimeType;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _suggestedFilename;
    struct RetainPtr<ASVThumbnailView> { 
        void *m_ptr; 
    }  _thumbnailView;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *web_contentView;
@property (nonatomic, readonly) NSData *web_dataRepresentation;
@property (nonatomic, readonly) bool web_isBackground;
@property (nonatomic, readonly) NSString *web_suggestedFilename;

+ (bool)web_requiresCustomSnapshotting;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_layoutThumbnailView;
- (id)provideDataForItem:(id)arg1;
- (void)thumbnailView:(id)arg1 wantsToPresentPreviewController:(id)arg2 forItem:(id)arg3;
- (void)web_computedContentInsetDidChange;
- (id)web_contentView;
- (void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_hideFindUI;
- (id)web_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 webView:(id)arg2 mimeType:(id)arg3;
- (bool)web_isBackground;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize { double x1; double x2; })arg1;

@end

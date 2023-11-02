
@interface WebViewVisualIdentificationOverlay : NSObject <CALayerDelegate> {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _kind;
    struct RetainPtr<CALayer> { 
        void *m_ptr; 
    }  _layer;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)installForWebViewIfNeeded:(id)arg1 kind:(id)arg2 deprecated:(bool)arg3;
+ (bool)shouldIdentifyWebViews;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithWebView:(id)arg1 kind:(id)arg2 deprecated:(bool)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end


@interface WKScriptMessage : NSObject {
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  _body;
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    }  _frameInfo;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _name;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _webView;
    struct RetainPtr<WKContentWorld> { 
        void *m_ptr; 
    }  _world;
}

@property (nonatomic, readonly, copy) id body;
@property (nonatomic, readonly, copy) WKFrameInfo *frameInfo;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) WKContentWorld *world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithBody:(id)arg1 webView:(id)arg2 frameInfo:(id)arg3 name:(id)arg4 world:(id)arg5;
- (id)body;
- (id)frameInfo;
- (id)name;
- (id)webView;
- (id)world;

@end

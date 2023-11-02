
@interface WebFramePrivate : NSObject {
    struct NakedPtr<WebCore::LocalFrame> { 
        struct LocalFrame {} *m_ptr; 
    }  coreFrame;
    bool  includedInWebKitStatistics;
    id  internalLoadDelegate;
    bool  isCommitting;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  provisionalURL;
    struct unique_ptr<WebScriptDebugger, std::default_delete<WebScriptDebugger>> { 
        struct __compressed_pair<WebScriptDebugger *, std::default_delete<WebScriptDebugger>> { 
            struct WebScriptDebugger {} *__value_; 
        } __ptr_; 
    }  scriptDebugger;
    bool  shouldCreateRenderers;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  url;
    struct RetainPtr<WebFrameView> { 
        void *m_ptr; 
    }  webFrameView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setWebFrameView:(id)arg1;

@end

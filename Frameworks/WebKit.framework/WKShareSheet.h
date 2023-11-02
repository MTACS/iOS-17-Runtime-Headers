
@interface WKShareSheet : NSObject <UIAdaptivePresentationControllerDelegate> {
    struct CompletionHandler<void (bool)>="m_function"{Function<void (bool)>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>>="__value_"^v {}  _completionHandler;
    struct WeakObjCPtr<id<WKShareSheetDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    bool  _didShareSuccessfully;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    }  _presentationViewController;
    struct RetainPtr<UIActivityViewController> { 
        void *m_ptr; 
    }  _shareSheetViewController;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _temporaryFileShareDirectory;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKShareSheetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createRandomSharingDirectoryForFile:(id)arg1;
+ (id)createTemporarySharingDirectory;
+ (id)writeFileToShareableURL:(id)arg1 data:(id)arg2 temporaryDirectory:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)delegate;
- (void)dismiss;
- (id)initWithView:(id)arg1;
- (void)presentWithParameters:(const void*)arg1 inRect:(struct optional<WebCore::FloatRect> { union { BOOL x_1_1_1; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; })arg2 completionHandler:(void*)arg3;
- (void)presentWithShareDataArray:(id)arg1 inRect:(struct optional<WebCore::FloatRect> { union { BOOL x_1_1_1; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; })arg2;
- (void)setDelegate:(id)arg1;

@end

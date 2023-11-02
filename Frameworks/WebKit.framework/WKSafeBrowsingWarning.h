
@interface WKSafeBrowsingWarning : UIScrollView <UITextViewDelegate> {
    struct WeakObjCPtr<WKSafeBrowsingBox> { 
        id m_weakReference; 
    }  _box;
    struct CompletionHandler<void (std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)>="m_function"{Function<void (std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void, std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void, std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&>>>="__value_"^v {}  _completionHandler;
    struct WeakObjCPtr<WKSafeBrowsingTextView> { 
        id m_weakReference; 
    }  _details;
    struct RefPtr<const WebKit::SafeBrowsingWarning, WTF::RawPtrTraits<const WebKit::SafeBrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::SafeBrowsingWarning>> { 
        struct SafeBrowsingWarning {} *m_ptr; 
    }  _warning;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addContent;
- (void)clickedOnLink:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (bool)forMainFrameNavigation;
- (void)goBackClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 safeBrowsingWarning:(const void*)arg2 completionHandler:(void*)arg3;
- (void)layoutSubviews;
- (void)layoutText;
- (void)showDetailsClicked;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateContentSize;

@end

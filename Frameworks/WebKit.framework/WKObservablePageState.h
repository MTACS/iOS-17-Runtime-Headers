
@interface WKObservablePageState : NSObject <_WKObservablePageState> {
    struct unique_ptr<WebKit::PageLoadStateObserver, std::default_delete<WebKit::PageLoadStateObserver>> { 
        struct __compressed_pair<WebKit::PageLoadStateObserver *, std::default_delete<WebKit::PageLoadStateObserver>> { 
            struct PageLoadStateObserver {} *__value_; 
        } __ptr_; 
    }  _observer;
    struct RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> { 
        struct WebPageProxy {} *m_ptr; 
    }  _page;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) bool _webProcessIsResponsive;
@property (nonatomic, readonly) double estimatedProgress;
@property (nonatomic, readonly) bool hasOnlySecureContent;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly) struct __SecTrust { }*serverTrust;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSURL *unreachableURL;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)URL;
- (bool)_webProcessIsResponsive;
- (void)dealloc;
- (double)estimatedProgress;
- (bool)hasOnlySecureContent;
- (id)initWithPage:(void*)arg1;
- (bool)isLoading;
- (struct __SecTrust { }*)serverTrust;
- (id)title;
- (id)unreachableURL;

@end

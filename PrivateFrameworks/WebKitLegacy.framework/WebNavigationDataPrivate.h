
@interface WebNavigationDataPrivate : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  clientRedirectSource;
    bool  hasSubstituteData;
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    }  originalRequest;
    struct RetainPtr<NSURLResponse> { 
        void *m_ptr; 
    }  response;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  title;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  url;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end


@interface _WKPreviewControllerDataSource : NSObject <ARQuickLookWebKitItemDelegate, QLPreviewControllerDataSource> {
    id /* block */  _completionHandler;
    struct URL { 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_string; 
        unsigned int m_isValid : 1; 
        unsigned int m_protocolIsInHTTPFamily : 1; 
        unsigned int m_cannotBeABaseURL : 1; 
        unsigned int m_portLength : 3; 
        unsigned int m_schemeEnd : 26; 
        unsigned int m_userStart; 
        unsigned int m_userEnd; 
        unsigned int m_passwordEnd; 
        unsigned int m_hostEnd; 
        unsigned int m_pathAfterLastSlash; 
        unsigned int m_pathEnd; 
        unsigned int m_queryEnd; 
    }  _downloadedURL;
    struct RetainPtr<ARQuickLookWebKitItem> { 
        void *m_ptr; 
    }  _item;
    struct RetainPtr<NSItemProvider> { 
        void *m_ptr; 
    }  _itemProvider;
    NSString * _mimeType;
    struct URL { 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_string; 
        unsigned int m_isValid : 1; 
        unsigned int m_protocolIsInHTTPFamily : 1; 
        unsigned int m_cannotBeABaseURL : 1; 
        unsigned int m_portLength : 3; 
        unsigned int m_schemeEnd : 26; 
        unsigned int m_userStart; 
        unsigned int m_userEnd; 
        unsigned int m_passwordEnd; 
        unsigned int m_hostEnd; 
        unsigned int m_pathAfterLastSlash; 
        unsigned int m_pathEnd; 
        unsigned int m_queryEnd; 
    }  _originatingPageURL;
    void * _previewController;
}

@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *mimeType;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (void)finish:(struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 3; unsigned int x6 : 26; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; })arg1;
- (id)initWithSystemPreviewController:(void*)arg1 MIMEType:(id)arg2 originatingPageURL:(struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 3; unsigned int x6 : 26; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; })arg3;
- (id)mimeType;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewItem:(id)arg1 didReceiveMessage:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setMimeType:(id)arg1;
- (void)setProgress:(float)arg1;

@end

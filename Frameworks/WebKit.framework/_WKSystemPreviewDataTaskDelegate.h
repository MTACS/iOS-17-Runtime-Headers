
@interface _WKSystemPreviewDataTaskDelegate : NSObject <_WKDataTaskDelegate> {
    struct RetainPtr<NSMutableData> { 
        void *m_ptr; 
    }  _data;
    long long  _expectedContentLength;
    int  _fileHandle;
    struct String { 
        struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  _filePath;
    void * _previewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)completeLoad;
- (void)dataTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)dataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)dataTask:(id)arg1 didReceiveResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (id)initWithSystemPreviewController:(void*)arg1;
- (bool)isValidFileExtension:(id)arg1;
- (bool)isValidMIMEType:(id)arg1;

@end

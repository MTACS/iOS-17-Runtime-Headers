
@interface WKDownloadProgress : NSProgress {
    struct WeakPtr<WebKit::Download, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  m_download;
    struct RefPtr<WebKit::SandboxExtension, WTF::RawPtrTraits<WebKit::SandboxExtension>, WTF::DefaultRefDerefTraits<WebKit::SandboxExtension>> { 
        struct SandboxExtension {} *m_ptr; 
    }  m_sandboxExtension;
    struct RetainPtr<NSURLSessionDownloadTask> { 
        void *m_ptr; 
    }  m_task;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateProgressExtendedAttributeOnProgressFile;
- (void)dealloc;
- (id)initWithDownloadTask:(id)arg1 download:(void*)arg2 URL:(id)arg3 sandboxExtension:(struct RefPtr<WebKit::SandboxExtension, WTF::RawPtrTraits<WebKit::SandboxExtension>, WTF::DefaultRefDerefTraits<WebKit::SandboxExtension>> { struct SandboxExtension {} *x1; })arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performCancel;
- (void)publish;
- (void)unpublish;

@end

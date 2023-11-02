
@interface WKFileUploadMediaTranscoder : NSObject {
    struct Function<void (NSArray<_WKFileUploadItem *> *)>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void, NSArray<_WKFileUploadItem *> *>, std::default_delete<WTF::Detail::CallableWrapperBase<void, NSArray<_WKFileUploadItem *> *>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void, NSArray<_WKFileUploadItem *> *> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, NSArray<_WKFileUploadItem *> *>>>="__value_"^v {}  _completionHandler;
    struct RetainPtr<AVAssetExportSession> { 
        void *m_ptr; 
    }  _exportSession;
    struct RetainPtr<NSArray<_WKFileUploadItem *>> { 
        void *m_ptr; 
    }  _items;
    unsigned long long  _processedVideoCount;
    struct RetainPtr<PXActivityProgressController> { 
        void *m_ptr; 
    }  _progressController;
    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    }  _progressTimer;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _temporaryDirectoryPath;
    unsigned long long  _videoCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dismissProgress;
- (void)_finishedProcessing;
- (void)_processItemAtIndex:(unsigned long long)arg1;
- (id)_temporaryDirectoryCreateIfNecessary;
- (void)_updateProgress:(id)arg1;
- (id)initWithItems:(id)arg1 videoCount:(unsigned long long)arg2 completionHandler:(void*)arg3;
- (void)start;

@end

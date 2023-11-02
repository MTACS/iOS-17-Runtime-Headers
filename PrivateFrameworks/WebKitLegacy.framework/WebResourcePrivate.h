
@interface WebResourcePrivate : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> { 
        struct ArchiveResource {} *m_ptr; 
    }  coreResource;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithCoreResource:(void*)arg1;

@end

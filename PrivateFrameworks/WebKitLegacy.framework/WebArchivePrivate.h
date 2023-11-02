
@interface WebArchivePrivate : NSObject {
    struct RetainPtr<WebResource> { 
        void *m_ptr; 
    }  cachedMainResource;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  cachedSubframeArchives;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  cachedSubresources;
    struct RefPtr<WebCore::LegacyWebArchive, WTF::RawPtrTraits<WebCore::LegacyWebArchive>, WTF::DefaultRefDerefTraits<WebCore::LegacyWebArchive>> { 
        struct LegacyWebArchive {} *m_ptr; 
    }  coreArchive;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)coreArchive;
- (void)dealloc;
- (id)init;
- (id)initWithCoreArchive:(void*)arg1;
- (void)setCoreArchive:(void*)arg1;

@end

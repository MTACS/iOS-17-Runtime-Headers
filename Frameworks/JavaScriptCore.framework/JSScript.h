
@interface JSScript : NSObject {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  m_cachePath;
    struct RefPtr<JSC::CachedBytecode, WTF::RawPtrTraits<JSC::CachedBytecode>, WTF::DefaultRefDerefTraits<JSC::CachedBytecode>> { 
        struct CachedBytecode {} *m_ptr; 
    }  m_cachedBytecode;
    struct MappedFileData { 
        void *m_fileData; 
        unsigned int m_fileSize; 
    }  m_mappedSource;
    struct String { 
        struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  m_source;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  m_sourceURL;
    long long  m_type;
    struct WeakObjCPtr<JSVirtualMachine> { 
        id m_weakReference; 
    }  m_virtualMachine;
}

+ (id)scriptOfType:(long long)arg1 memoryMappedFromASCIIFile:(id)arg2 withSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id*)arg6;
+ (id)scriptOfType:(long long)arg1 withSource:(id)arg2 andSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id*)arg6;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)cacheBytecodeWithError:(id*)arg1;
- (struct RefPtr<JSC::CachedBytecode, WTF::RawPtrTraits<JSC::CachedBytecode>, WTF::DefaultRefDerefTraits<JSC::CachedBytecode>> { struct CachedBytecode {} *x1; })cachedBytecode;
- (unsigned int)hash;
- (id)init;
- (bool)isUsingBytecodeCache;
- (void*)jsSourceCode;
- (void)readCache;
- (const void*)source;
- (struct SourceCode { struct RefPtr<JSC::SourceProvider, WTF::RawPtrTraits<JSC::SourceProvider>, WTF::DefaultRefDerefTraits<JSC::SourceProvider>> { struct SourceProvider {} *x_1_1_1; } x1; int x2; int x3; struct OrdinalNumber { int x_4_1_1; } x4; struct OrdinalNumber { int x_5_1_1; } x5; })sourceCode;
- (id)sourceURL;
- (long long)type;
- (bool)writeCache:(void*)arg1;

@end

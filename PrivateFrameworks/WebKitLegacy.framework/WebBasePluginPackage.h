
@interface WebBasePluginPackage : NSObject {
    int (* BP_CreatePluginMIMETypesPreferences;
    struct RetainPtr<__CFBundle *> { 
        void *m_ptr; 
    }  cfBundle;
    struct String { 
        struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  path;
    NSMutableSet * pluginDatabases;
    struct PluginInfo { 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } name; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } file; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } desc; 
        struct Vector<WebCore::MimeClassInfo, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
            struct MimeClassInfo {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } mimes; 
        bool isApplicationPlugin; 
        unsigned char clientLoadPolicy; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } bundleIdentifier; 
    }  pluginInfo;
}

+ (void)initialize;
+ (id)pluginWithPath:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)MIMETypeForExtension:(const void*)arg1;
- (id)_objectForInfoDictionaryKey:(id)arg1;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_1_1; } x1; })bundleIdentifier;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_1_1; } x1; })bundleVersion;
- (void)createPropertyListFile;
- (void)dealloc;
- (bool)getPluginInfoFromPLists;
- (id)initWithPath:(id)arg1;
- (bool)isJavaPlugIn;
- (bool)isNativeLibraryData:(id)arg1;
- (bool)isQuickTimePlugIn;
- (bool)load;
- (id)pListForPath:(id)arg1 createFile:(bool)arg2;
- (const void*)path;
- (const void*)pluginInfo;
- (bool)supportsExtension:(const void*)arg1;
- (bool)supportsMIMEType:(const void*)arg1;
- (void)unload;
- (unsigned int)versionNumber;
- (void)wasAddedToPluginDatabase:(id)arg1;
- (void)wasRemovedFromPluginDatabase:(id)arg1;

@end

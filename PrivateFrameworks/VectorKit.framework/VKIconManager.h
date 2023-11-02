
@interface VKIconManager : NSObject {
    VKInternalIconManager * _iconManager;
    NSObject<OS_dispatch_source> * _iconManagerReleaseSource;
    unsigned int  _iconManagerTimerID;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _lock;
    VKSharedResources * _sharedResources;
    bool  _usingSingletonIconManager;
}

+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_internalIconManager;
- (unsigned int)darkVariant;
- (void)dealloc;
- (id)imageForDataID:(unsigned int)arg1 text:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForIconID:(unsigned int)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;
- (id)imageForImageSourceKey:(id)arg1;
- (id)imageForKey:(unsigned int)arg1 value:(unsigned int)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForName:(id)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;
- (id)imageForStyleAttributes:(id)arg1 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x1; struct __shared_weak_count {} *x2; })arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)init;
- (bool)isCachingAtlases;
- (void)purge;
- (void)setIsCachingAtlases:(bool)arg1;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (unsigned int)styleAttributeTransitTypeKey;
- (unsigned int)trafficIncidentTypeKey;

@end

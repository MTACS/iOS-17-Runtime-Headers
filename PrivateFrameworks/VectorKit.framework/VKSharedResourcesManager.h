
@interface VKSharedResourcesManager : NSObject {
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _lock;
    VKSharedResources * _sharedResources;
    NSMapTable * _tilegroupIdentifierToResources;
}

+ (void)removeResourceUser;
+ (id)sharedManager;
+ (id)sharedResources;
+ (id)sharedResourcesCreateIfNil:(bool)arg1 addResourceUser:(bool)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_removeResourceUser;
- (bool)hasResources;
- (id)init;
- (id)resourcesCreateIfNil:(bool)arg1 addResourceUser:(bool)arg2;

@end


@interface _LSDatabase : NSObject {
    struct __CSStoreAccessContext { } * accessContext;
    unsigned int  isForcedForRemoteUpdates;
    unsigned int  isForcedForXCTesting;
    unsigned int  needsUpdate;
    FSNode * node;
    struct LSSchema { 
        unsigned int headerTable; 
        unsigned int bundleTable; 
        unsigned int claimTable; 
        unsigned int serviceTable; 
        unsigned int utypeTable; 
        struct { 
            struct CSMap { 
                unsigned int table; 
                struct CSMapCallbacks { 
                    int (*retainKey)(); 
                    int (*releaseKey)(); 
                    int (*getKeyHash)(); 
                    int (*keyMatchesData)(); 
                    int (*retainValue)(); 
                    int (*releaseValue)(); 
                } cb; 
                struct CSMapContext {} *context; 
                struct os_unfair_lock_s { 
                    unsigned int _os_unfair_lock_opaque; 
                } _lock; 
                unsigned int _generation; 
                struct _CSMapHeader {} *_header; 
                unsigned int *_keys; 
                unsigned int *_values; 
            } map; 
        } bindableKeyMap; 
        struct { 
            struct CSMap { 
                unsigned int table; 
                struct CSMapCallbacks { 
                    int (*retainKey)(); 
                    int (*releaseKey)(); 
                    int (*getKeyHash)(); 
                    int (*keyMatchesData)(); 
                    int (*retainValue)(); 
                    int (*releaseValue)(); 
                } cb; 
                struct CSMapContext {} *context; 
                struct os_unfair_lock_s { 
                    unsigned int _os_unfair_lock_opaque; 
                } _lock; 
                unsigned int _generation; 
                struct _CSMapHeader {} *_header; 
                unsigned int *_keys; 
                unsigned int *_values; 
            } map; 
            unsigned int bindingClass; 
            unsigned char isCaseInsensitive; 
        } bindingMaps[14]; 
        unsigned int handlerPrefTable; 
        unsigned int containerTable; 
        unsigned int aliasTable; 
        unsigned int pluginTable; 
        unsigned int extensionPointTable; 
        unsigned int bindingListTable; 
        unsigned int propertyListTable; 
        unsigned int localizedStringTable; 
        unsigned int canonicalStringTable; 
        struct _LSSchemaCache {} *_cache; 
    }  schema;
    struct LSSessionKey { 
        unsigned int uid; 
        bool systemSession; 
    }  sessionKey;
    struct __CSStore { } * store;
}

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (id)description;
- (id)init;

@end

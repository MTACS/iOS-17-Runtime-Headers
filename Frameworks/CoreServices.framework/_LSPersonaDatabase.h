
@interface _LSPersonaDatabase : NSObject {
    NSDictionary * _cachedBundleIDToPersonasMap;
    NSString * _cachedPersonalPersonaUniqueString;
    NSString * _cachedSystemPersonaUniqueString;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _uncachedCalloutLock;
    unsigned long long  _userManagementGenerationNumber;
}

- (void).cxx_destruct;
- (id)_getPersonaAttributesRetryingIfNecessary;
- (id)getBundleIDToPersonasWithAttributesMap;
- (void)getCachedBundleIDToPersonasWithAttributesMap:(id*)arg1 systemPersonaUniqueString:(id*)arg2 personalPersonaUniqueString:(id*)arg3;
- (void)getUncachedBundleIDToPersonasWithAttributesMap:(id*)arg1 systemPersonaUniqueString:(id*)arg2 personalPersonaUniqueString:(id*)arg3;
- (id)initPrivately;
- (void)refreshFromUserManagementIfNecessary;

@end

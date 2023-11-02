
@interface NSCachingFetchRequest : NSFetchRequest {
    id  _cachedInfo;
    id  _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _substitutionVariables;
}

@property (nonatomic, readonly) id _identifier;
@property (nonatomic, copy) NSDictionary *substitutionVariables;

+ (id)_generateIdentifier;

- (void)_cacheInfo:(id)arg1 forRequestor:(id)arg2;
- (id)_cachedInfoForRequestor:(id)arg1;
- (id)_copyForDirtyContext;
- (void)_disableSQLStatementCaching;
- (id)_identifier;
- (bool)_isCachingFetchRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setSubstitutionVariables:(id)arg1;
- (id)substitutionVariables;

@end

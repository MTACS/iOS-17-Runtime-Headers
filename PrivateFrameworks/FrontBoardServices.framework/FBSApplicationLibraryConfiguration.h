
@interface FBSApplicationLibraryConfiguration : NSObject <NSCopying> {
    bool  _allowConcurrentLoading;
    id /* block */  _applicationIdentityFilter;
    Class  _applicationInfoClass;
    Class  _applicationPlaceholderClass;
    id /* block */  _installedApplicationFilter;
    bool  _personaAware;
    id /* block */  _placeholderFilter;
    id /* block */  _placeholderIdentityFilter;
}

@property (nonatomic) bool allowConcurrentLoading;
@property (nonatomic, copy) id /* block */ applicationIdentityFilter;
@property (nonatomic, retain) Class applicationInfoClass;
@property (nonatomic, retain) Class applicationPlaceholderClass;
@property (nonatomic, copy) id /* block */ installedApplicationFilter;
@property (getter=isPersonaAware, nonatomic) bool personaAware;
@property (nonatomic, copy) id /* block */ placeholderFilter;
@property (nonatomic, copy) id /* block */ placeholderIdentityFilter;

- (void).cxx_destruct;
- (bool)allowConcurrentLoading;
- (id /* block */)applicationIdentityFilter;
- (Class)applicationInfoClass;
- (Class)applicationPlaceholderClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id /* block */)installedApplicationFilter;
- (bool)isPersonaAware;
- (id /* block */)placeholderFilter;
- (id /* block */)placeholderIdentityFilter;
- (void)setAllowConcurrentLoading:(bool)arg1;
- (void)setApplicationIdentityFilter:(id /* block */)arg1;
- (void)setApplicationInfoClass:(Class)arg1;
- (void)setApplicationPlaceholderClass:(Class)arg1;
- (void)setInstalledApplicationFilter:(id /* block */)arg1;
- (void)setPersonaAware:(bool)arg1;
- (void)setPlaceholderFilter:(id /* block */)arg1;
- (void)setPlaceholderIdentityFilter:(id /* block */)arg1;

@end


@interface MCMContainerClassTransientPath : MCMContainerClassPath

+ (id)_globalTemporaryComponent;
+ (id)_temporaryComponent;
+ (id)containerPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2;
+ (id)transientGlobalBundleURL;
+ (id)transientGlobalURL;
+ (id)transientURLWithUserIdentity:(id)arg1 withContainerClass:(unsigned long long)arg2;

@end


@interface IXPromisedAppReference : IXOwnedDataPromise

@property (nonatomic, readonly) IXApplicationIdentity *identity;
@property (nonatomic, readonly) unsigned long long installationDomain;
@property (nonatomic, retain) IXPromisedAppReferenceSeed *seed;

+ (id)acquireReferenceToAppWithIdentity:(id)arg1 inDomain:(unsigned long long)arg2 forClient:(unsigned long long)arg3 ifMatchingPredicate:(id)arg4 error:(id*)arg5;
+ (id)acquireReferenceToAppWithIdentity:(id)arg1 inDomain:(unsigned long long)arg2 forClient:(unsigned long long)arg3 matchingAppInRecord:(id)arg4 error:(id*)arg5;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 forAppWithIdentity:(id)arg3 inDomain:(unsigned long long)arg4 ifMatchingPredicate:(id)arg5 error:(id*)arg6;
- (id)initWithSeed:(id)arg1;
- (unsigned long long)installationDomain;
- (id)placeholderPromiseForInstallType:(unsigned long long)arg1 withError:(id*)arg2;
- (void)resetWithCompletion:(id /* block */)arg1;
- (Class)seedClass;

@end

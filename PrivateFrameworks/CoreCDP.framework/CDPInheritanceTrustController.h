
@interface CDPInheritanceTrustController : NSObject

- (void)createInheritanceKeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteInheritanceAccessKeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (bool)isInheritanceAccessKeyValid:(id)arg1;
- (void)recoverOctagonWithContext:(id)arg1 inheritanceKey:(id)arg2 completion:(id /* block */)arg3;
- (void)validateAccessKey:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;

@end

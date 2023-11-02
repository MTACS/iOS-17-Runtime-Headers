
@interface PXPeopleBootstrap : NSObject

+ (void)_addToPeopleAlbumWithChangeRequest:(id)arg1;
+ (void)_favoritePersonWithChangeRequest:(id)arg1;
+ (void)_mergePerson:(id)arg1 context:(id)arg2 toPerson:(id)arg3;
+ (void)_namePerson:(id)arg1 context:(id)arg2 withChangeRequest:(id)arg3;
+ (bool)_namePerson:(id)arg1 toContact:(id)arg2 changeRequest:(id)arg3 context:(id)arg4;
+ (void)_namePerson:(id)arg1 toContact:(id)arg2 withChangeRequest:(id)arg3;
+ (void)_namePerson:(id)arg1 toString:(id)arg2 withChangeRequest:(id)arg3;
+ (void)_unfavoritePersonWithChangeRequest:(id)arg1;
+ (void)nameAndVerifyPerson:(id)arg1 toContact:(id)arg2 photoLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)nameAndVerifyPerson:(id)arg1 toName:(id)arg2 photoLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)performBootstrapWithSourcePerson:(id)arg1 context:(id)arg2 synchronous:(bool)arg3 completion:(id /* block */)arg4;
+ (struct CGSize { double x1; double x2; })preferredBootstrapSize;

@end

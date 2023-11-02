
@interface CRKPersonaAdoptingClassKitFacade : CRKClassKitFacadeDecoratorBase {
    CRKClassKitPersonaAdopter * _personaAdopter;
}

@property (nonatomic, readonly) CRKClassKitPersonaAdopter *personaAdopter;

+ (id)keyPathsForValuesAffectingCurrentPersonaUniqueString;

- (void).cxx_destruct;
- (id)currentPersonaUniqueString;
- (void)currentUserWithCompletion:(id /* block */)arg1;
- (void)deregisterDataObserver:(id)arg1;
- (void)enrolledClassesWithCompletion:(id /* block */)arg1;
- (void)executeQuery:(id)arg1;
- (id)initWithClassKitFacade:(id)arg1 personaBlockPerformer:(id)arg2;
- (void)instructedClassesWithCompletion:(id /* block */)arg1;
- (void)instructorsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)locationsWithObjectIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)performBlockWithClassKitPersona:(id /* block */)arg1;
- (id)personaAdopter;
- (void)registerDataObserver:(id)arg1;
- (void)removeClass:(id)arg1 completion:(id /* block */)arg2;
- (void)saveClass:(id)arg1 completion:(id /* block */)arg2;
- (void)studentsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;

@end

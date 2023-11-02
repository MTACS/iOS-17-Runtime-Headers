
@interface HDUserDomainConceptEntityRegistry : NSObject {
    HDDaemon * _daemon;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _lock_typeIdentifierToEntityClass;
}

@property (nonatomic, readonly) HDDaemon *daemon;

+ (void)_setSharedInstance:(id)arg1;
+ (id)registryWithDaemon:(id)arg1 setSharedInstance:(bool)arg2;
+ (id)sharedInstance;
+ (void)unitTesting_setSharedInstance:(id)arg1;

- (void).cxx_destruct;
- (id)_builtinUserDomainConceptEntityClasses;
- (void)_lock_loadUserDomainConceptEntities;
- (void)_registerUserDomainConceptClassesFromProvider:(id)arg1 classRegistry:(id)arg2;
- (id)_registeredUserDomainConceptEntityClasses;
- (id)daemon;
- (id)initWithDaemon:(id)arg1;
- (id)registeredDictionaryOfEntities;
- (id)registeredUserDomainConceptEntityClasses;
- (Class)userDomainConceptEntityClassForTypeIdentifier:(id)arg1;

@end

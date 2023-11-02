
@interface ACPersonaManager : NSObject {
    NSArray * _dataSeparatedPersonasUIDs;
    NSString * _enterprisePersonaUID;
    NSSet * _guestPersonasUID;
    unsigned long long  _personaGenerationID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _personaStorageLock;
    NSString * _personalPersonaUID;
    ACAccountStore * _store;
}

@property (nonatomic, readonly, copy) NSArray *dataSeparatedPersonasUIDs;
@property (nonatomic, readonly, copy) NSString *enterprisePersonaUID;
@property (nonatomic, readonly, copy) NSSet *guestPersonasUIDs;
@property (nonatomic, readonly, copy) NSString *personalPersonaUID;

+ (void)_changePersonaContextUsingPersonaID:(id)arg1 withCompletion:(id /* block */)arg2;
+ (bool)performWithinPersona:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)performWithinPersonaForAccount:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)performWithinPersonaForAccountIdentifier:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cacheURL;
- (void)_lockedLoadCache;
- (void)_lockedSaveCurrentCache;
- (void)_lockedUpdatePersonasUIDsIfNeeded;
- (id)dataSeparatedPersonasUIDs;
- (id)enterprisePersonaUID;
- (id)guestPersonasUIDs;
- (id)init;
- (id)personalPersonaUID;
- (id)store;
- (void)updatePersonasUIDs;

@end

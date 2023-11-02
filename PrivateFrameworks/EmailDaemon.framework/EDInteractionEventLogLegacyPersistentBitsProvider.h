
@interface EDInteractionEventLogLegacyPersistentBitsProvider : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (id)_findExistingSaltError:(out id*)arg1;
- (id)_oldSalt;
- (id)_persistentBits;
- (id)_queryKeychainError:(out id*)arg1;

@end

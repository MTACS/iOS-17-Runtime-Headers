
@interface DAABLegacyAccount : NSObject <DAContactsAccount> {
    void * _account;
}

@property (nonatomic, readonly) void*account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void*)account;
- (void)dealloc;
- (id)externalIdentifier;
- (id)identifier;
- (id)initWithABAccout:(void*)arg1;
- (bool)isAccount;
- (bool)isContact;
- (bool)isContainer;
- (bool)isGroup;
- (int)legacyIdentifier;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)arg1;

@end

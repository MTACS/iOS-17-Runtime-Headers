
@interface VIPManager : NSObject <EMVIPManager> {
    struct __CFDictionary { } * _abPersonByVIPIdentifier;
    NSLock * _abPersonByVIPIdentifierLock;
    <EMVIPManager> * _backingManager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) EAEmailAddressSet *allVIPEmailAddresses;
@property (nonatomic, readonly, copy) NSSet *allVIPs;
@property (nonatomic, readonly) <EMVIPManager> *backingManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasVIPs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultInstance;
+ (struct os_unfair_lock_s { unsigned int x1; }*)defaultInstanceLock;
+ (void)setBackingManager:(id)arg1;

- (void).cxx_destruct;
- (void)_vipsDidChange:(id)arg1;
- (id)allVIPEmailAddresses;
- (id)allVIPEmailAddressesCriterion;
- (id)allVIPs;
- (id)backingManager;
- (id)criterionForEmailAddresses:(id)arg1;
- (void)deleteVIPWithIdentifier:(id)arg1;
- (void*)existingPersonForVIP:(id)arg1 usingAddressBook:(void*)arg2;
- (void)getAllVIPsWithCompletion:(id /* block */)arg1;
- (bool)hasVIPs;
- (id)initWithBackingManager:(id)arg1;
- (bool)isVIPAddress:(id)arg1;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (void)saveVIP:(id)arg1;
- (void)saveVIPs:(id)arg1;
- (id)sortedVIPs;
- (id)vipCriteria;
- (id)vipForEmailAddresses:(id)arg1 andDisplayNames:(id)arg2;
- (id)vipWithIdentifier:(id)arg1;

@end

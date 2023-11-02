
@interface HAPKeyBag : NSObject <HMFLogging> {
    NSString * _accessoryIdentifier;
    NSArray * _availableKeysToTry;
    long long  _currentIndexInBag;
    <HAPKeyStore> * _keyStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, copy) NSString *accessoryIdentifier;
@property (nonatomic, retain) NSArray *availableKeysToTry;
@property (nonatomic) long long currentIndexInBag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HAPKeyStore> *keyStore;
@property (readonly) Class superclass;
@property (readonly) unsigned long long totalIdentities;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_populateBagWithPairingIdentitiesForAccessory:(id)arg1 fromStore:(id)arg2;
- (id)accessoryIdentifier;
- (id)availableKeysToTry;
- (id)currentIdentity;
- (long long)currentIndexInBag;
- (long long)getCurrentIndexInBag;
- (id)initWithAccessoryIdentifier:(id)arg1 keyStore:(id)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 keyStore:(id)arg2 controllerKeyList:(id)arg3;
- (bool)isEmpty;
- (bool)isValidIndex:(long long)arg1;
- (id)keyStore;
- (id)logIdentifier;
- (id)nextIdentity;
- (void)refreshKeys;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAvailableKeysToTry:(id)arg1;
- (void)setCurrentIndexInBag:(long long)arg1;
- (unsigned long long)totalIdentities;

@end

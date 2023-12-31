
@interface CUIKiCloudKVStore : NSObject {
    bool  _hasConnectedToCarBluetooth;
    NSDate * _lastCarConnectionDate;
    <NSObject><NSCopying><NSCoding> * _ubiquityIdentityToken;
}

@property (nonatomic) bool hasConnectedToCarBluetooth;
@property (nonatomic, retain) NSDate *lastCarConnectionDate;
@property (retain) <NSObject><NSCopying><NSCoding> *ubiquityIdentityToken;

+ (bool)_haveiCloudKVStoreEntitlement;
+ (id)sharediCloudKVStore;

- (void).cxx_destruct;
- (bool)_canAccessiCloudKVStore;
- (void)_identityChanged:(id)arg1;
- (void)_storeDidChange:(id)arg1;
- (void)dealloc;
- (bool)hasConnectedToCarBluetooth;
- (id)init;
- (id)lastCarConnectionDate;
- (void)setHasConnectedToCarBluetooth:(bool)arg1;
- (void)setLastCarConnectionDate:(id)arg1;
- (void)setUbiquityIdentityToken:(id)arg1;
- (id)ubiquityIdentityToken;

@end

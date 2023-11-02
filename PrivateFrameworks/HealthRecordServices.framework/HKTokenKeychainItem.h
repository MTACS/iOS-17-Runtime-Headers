
@interface HKTokenKeychainItem : NSObject {
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *name;

+ (bool)_addTokenIdentifiedByName:(id)arg1 data:(id)arg2 synchronizable:(bool)arg3 error:(out id*)arg4;
+ (bool)_deleteTokenIdentifiedByName:(id)arg1 error:(out id*)arg2;
+ (id)_fetchTokenIdentifiedByName:(id)arg1 error:(id*)arg2;
+ (id)_identifyingAttributesForKeyIdentifiedByName:(id)arg1;
+ (bool)_isTokenPresentIdentifiedByName:(id)arg1 error:(id*)arg2;
+ (id)_keyQueryAttributesForKeyIdentifiedByName:(id)arg1;
+ (bool)_makeTokenSynchronizableIfNeededIdentifiedByName:(id)arg1 error:(id*)arg2;
+ (id)_storableAttributesForKeyIdentifiedByName:(id)arg1 data:(id)arg2 modificationDate:(id)arg3 synchronizable:(bool)arg4;
+ (bool)_storeTokenIdentifiedByName:(id)arg1 data:(id)arg2 synchronizable:(bool)arg3 error:(out id*)arg4;
+ (bool)_updateTokenIdentifiedByName:(id)arg1 data:(id)arg2 synchronizable:(bool)arg3 error:(out id*)arg4;
+ (id)tokenKeychainItemSecurityClass;

- (void).cxx_destruct;
- (bool)deleteWithError:(id*)arg1;
- (id)fetchWithError:(id*)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isPresentWithError:(id*)arg1;
- (bool)makeTokenSynchronizableIfNeededWithError:(id*)arg1;
- (id)name;
- (bool)storeLocalToken:(id)arg1 error:(id*)arg2;
- (bool)storeSynchronizableToken:(id)arg1 error:(id*)arg2;

@end

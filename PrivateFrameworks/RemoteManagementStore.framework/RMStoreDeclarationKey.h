
@interface RMStoreDeclarationKey : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _declarationAssets;
    NSString * _declarationIdentifier;
    NSString * _declarationServerToken;
    NSString * _key;
    NSString * _keyWithoutServerToken;
    NSString * _storeIdentifier;
    NSString * _subscriberIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *declarationAssets;
@property (nonatomic, readonly, copy) NSString *declarationIdentifier;
@property (nonatomic, readonly, copy) NSString *declarationServerToken;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *keyWithoutServerToken;
@property (nonatomic, readonly, copy) NSString *storeIdentifier;
@property (nonatomic, readonly, copy) NSString *subscriberIdentifier;

+ (bool)assetDifferencesOnlyForOldKey:(id)arg1 newKey:(id)arg2;
+ (id)newDeclarationKey:(id)arg1;
+ (id)newDeclarationKeyWithSubscriberIdentifier:(id)arg1 reference:(id)arg2;
+ (id)newDeclarationKeyWithSubscriberIdentifier:(id)arg1 store:(id)arg2 declaration:(id)arg3;
+ (id)newDeclarationKeyWithSubscriberIdentifier:(id)arg1 storeIdentifier:(id)arg2 declarationIdentifier:(id)arg3 declarationServerToken:(id)arg4;
+ (id)newDeclarationKeyWithSubscriberIdentifier:(id)arg1 storeIdentifier:(id)arg2 declarationIdentifier:(id)arg3 declarationServerToken:(id)arg4 assetKeys:(id)arg5;
+ (id)newDeclarationKeyWithoutAssets:(id)arg1;
+ (bool)supportsSecureCoding;
+ (void)synchronizeOldKeys:(id)arg1 newKeys:(id)arg2 returningUnchangedKeys:(id*)arg3 returningNewAddKeys:(id*)arg4 returningNewChangeKeys:(id*)arg5 returningOldReplaceKeys:(id*)arg6 returningOldRemoveKeys:(id*)arg7;

- (void).cxx_destruct;
- (void)_parseDeclarationKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)declarationAssets;
- (id)declarationIdentifier;
- (id)declarationServerToken;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeclarationKey:(id)arg1;
- (id)initWithSubscriberIdentifier:(id)arg1 store:(id)arg2 declaration:(id)arg3 assets:(id)arg4;
- (id)initWithSubscriberIdentifier:(id)arg1 storeIdentifier:(id)arg2 declarationIdentifier:(id)arg3 declarationServerToken:(id)arg4 assetKeys:(id)arg5;
- (id)initWithSubscriberIdentifier:(id)arg1 storeIdentifier:(id)arg2 declarationIdentifier:(id)arg3 declarationServerToken:(id)arg4 assets:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)key;
- (id)keyByReplacingSubscriberIdentifier:(id)arg1;
- (id)keyWithoutServerToken;
- (id)storeIdentifier;
- (id)subscriberIdentifier;

@end

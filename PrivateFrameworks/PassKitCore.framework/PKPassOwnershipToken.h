
@interface PKPassOwnershipToken : NSObject {
    NSString * _ownershipToken;
    NSString * _ownershipTokenIdentifier;
}

@property (nonatomic, copy) NSString *ownershipToken;
@property (nonatomic, readonly, copy) NSString *ownershipTokenIdentifier;

+ (void)deleteAllLocalKeychainOwnershipTokens;
+ (void)queryKeychainForOwnershipTokens:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_readFromKeychain;
- (id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (void)_writeToKeychain;
- (void)deleteTokenFromKeychain;
- (void)deleteTokenFromLocalKeychain;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithOwnershipToken:(id)arg1 identifier:(id)arg2;
- (id)ownershipToken;
- (id)ownershipTokenIdentifier;
- (void)setOwnershipToken:(id)arg1;

@end

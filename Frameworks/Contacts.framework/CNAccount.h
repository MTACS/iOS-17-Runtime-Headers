
@interface CNAccount : NSObject <NSCopying, NSSecureCoding> {
    NSString * _externalIdentifierString;
    int  _iOSLegacyIdentifier;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *_cnui_displayName;
@property (nonatomic, readonly, copy) NSString *externalIdentifierString;
@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (nonatomic, readonly, copy) NSString *identifier;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)identifierProvider;
+ (bool)ios_requestAccountSyncWithOptions:(unsigned long long)arg1;
+ (id)localAccount;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)os_log;
+ (id)predicateForAccountForContainerWithIdentifier:(id)arg1;
+ (id)predicateForAccountWithExternalIdentifier:(id)arg1;
+ (id)predicateForAccountsWithIdentifiers:(id)arg1;
+ (bool)requestAccountSyncWithDefaultOptions;
+ (bool)requestAccountSyncWithOptions:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifierString;
- (unsigned long long)hash;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 iOSLegacyIdentifier:(int)arg3;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)_cnui_accountStore;
+ (void)_cnui_canRequestRefreshWithCompletion:(id /* block */)arg1;
+ (id)_cnui_displayNameForACAccount:(id)arg1;
+ (id)_cnui_displayNameForLocal;
+ (bool)_cnui_isFacebookACAccount:(id)arg1;
+ (bool)_cnui_requestRefreshWithUserAction:(bool)arg1;

- (id)_cnui_displayName;

@end

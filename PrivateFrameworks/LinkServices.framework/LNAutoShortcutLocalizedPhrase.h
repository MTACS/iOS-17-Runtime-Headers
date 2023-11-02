
@interface LNAutoShortcutLocalizedPhrase : NSObject <NSSecureCoding> {
    NSString * _basePhraseTemplate;
    NSString * _bundleIdentifier;
    NSXPCConnection * _connection;
    NSString * _localizedPhrase;
    NSString * _optionsCollectionSystemImageName;
    NSString * _optionsCollectionTitle;
    NSUUID * _parameterIdentifier;
    bool  _primary;
    NSString * _signature;
}

@property (nonatomic, readonly, copy) NSString *basePhraseTemplate;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *localizedPhrase;
@property (nonatomic, readonly, copy) NSString *optionsCollectionSystemImageName;
@property (nonatomic, readonly, copy) NSString *optionsCollectionTitle;
@property (nonatomic, readonly, copy) NSUUID *parameterIdentifier;
@property (getter=isPrimary, nonatomic, readonly) bool primary;
@property (nonatomic, readonly) NSString *signature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)basePhraseTemplate;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedPhrase:(id)arg1 bundleIdentifier:(id)arg2 basePhraseTemplate:(id)arg3 parameterIdentifier:(id)arg4;
- (id)initWithLocalizedPhrase:(id)arg1 bundleIdentifier:(id)arg2 basePhraseTemplate:(id)arg3 parameterIdentifier:(id)arg4 optionsCollectionTitle:(id)arg5 optionsCollectionSystemImageName:(id)arg6 primary:(bool)arg7 signature:(id)arg8;
- (id)initWithLocalizedPhrase:(id)arg1 bundleIdentifier:(id)arg2 basePhraseTemplate:(id)arg3 parameterIdentifier:(id)arg4 primary:(bool)arg5;
- (id)initWithLocalizedPhrase:(id)arg1 bundleIdentifier:(id)arg2 basePhraseTemplate:(id)arg3 parameterIdentifier:(id)arg4 primary:(bool)arg5 signature:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isPrimary;
- (id)localizedPhrase;
- (id)optionsCollectionSystemImageName;
- (id)optionsCollectionTitle;
- (id)parameterIdentifier;
- (id)signature;

@end

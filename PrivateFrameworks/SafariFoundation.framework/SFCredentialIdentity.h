
@interface SFCredentialIdentity : NSObject <NSCopying, NSSecureCoding, SFSafariPasswordCredential> {
    NSString * _domainWithoutWWWDot;
    NSString * _externalRecordIdentifier;
    SFCredentialProviderExtensionState * _owningExtensionState;
    long long  _rank;
    long long  _rowIdentifier;
    NSString * _serviceIdentifier;
    long long  _serviceIdentifierType;
    NSString * _user;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExternal, nonatomic, readonly) bool external;
@property (nonatomic, readonly, copy) NSString *externalRecordIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFCredentialProviderExtensionState *owningExtensionState;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly) long long rank;
@property (nonatomic) long long rowIdentifier;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;
@property (nonatomic, readonly) long long serviceIdentifierType;
@property (nonatomic, readonly, copy) NSString *site;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_domainWithoutWWWDot;
- (long long)compareForQuickTypeBar:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)externalRecordIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRowIdentifier:(long long)arg1 serviceIdentifier:(id)arg2 serviceIdentifierType:(long long)arg3 externalRecordIdentifier:(id)arg4 user:(id)arg5 rank:(long long)arg6;
- (id)initWithRowIdentifier:(long long)arg1 serviceIdentifier:(id)arg2 serviceIdentifierType:(long long)arg3 externalRecordIdentifier:(id)arg4 user:(id)arg5 rank:(long long)arg6 owningExtensionState:(id)arg7;
- (id)initWithServiceIdentifier:(id)arg1 serviceIdentifierType:(long long)arg2 externalRecordIdentifier:(id)arg3 user:(id)arg4 rank:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isExternal;
- (id)owningExtensionState;
- (id)password;
- (long long)rank;
- (long long)rowIdentifier;
- (id)serviceIdentifier;
- (long long)serviceIdentifierType;
- (void)setOwningExtensionState:(id)arg1;
- (void)setRowIdentifier:(long long)arg1;
- (id)site;
- (long long)type;
- (id)user;

@end

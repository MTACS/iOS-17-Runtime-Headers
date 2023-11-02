
@interface THThreadNetworkCredentialsStoreRecord : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    THThreadNetworkCredentials * _credentials;
    NSString * _keychainAccessGroup;
    NSDate * _lastModificationDate;
    THThreadNetwork * _network;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) THThreadNetworkCredentials *credentials;
@property (nonatomic, readonly) NSString *keychainAccessGroup;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (nonatomic, readonly) THThreadNetwork *network;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)creationDate;
- (id)credentials;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetwork:(id)arg1 credentials:(id)arg2 uniqueIdentifier:(id)arg3 keychainAccessGroup:(id)arg4 creationDate:(id)arg5 lastModificationDate:(id)arg6;
- (id)keychainAccessGroup;
- (id)lastModificationDate;
- (id)network;
- (id)uniqueIdentifier;

@end


@interface THThreadNetworkCredentialsActiveDataSetRecord : NSObject <NSSecureCoding> {
    THThreadNetworkBorderAgent * _borderAgent;
    NSDate * _creationDate;
    THThreadNetworkCredentials * _credentials;
    THThreadNetworkCredentialsDataSet * _credentialsDataSet;
    NSString * _keychainAccessGroup;
    NSDate * _lastModificationDate;
    THThreadNetwork * _network;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) THThreadNetworkBorderAgent *borderAgent;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) THThreadNetworkCredentials *credentials;
@property (nonatomic, readonly) THThreadNetworkCredentialsDataSet *credentialsDataSet;
@property (nonatomic, readonly) NSString *keychainAccessGroup;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (nonatomic, readonly) THThreadNetwork *network;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)borderAgent;
- (id)creationDate;
- (id)credentials;
- (id)credentialsDataSet;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBorderAgent:(id)arg1 credentialsDataSet:(id)arg2 network:(id)arg3 credentials:(id)arg4 uniqueIdentifier:(id)arg5 keychainAccessGroup:(id)arg6 creationDate:(id)arg7 lastModificationDate:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (id)keychainAccessGroup;
- (id)lastModificationDate;
- (id)network;
- (void)setCredentials:(id)arg1;
- (id)uniqueIdentifier;

@end

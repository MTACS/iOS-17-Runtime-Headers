
@interface PKRemoteAssetManifestItem : NSObject <NSSecureCoding> {
    NSURL * _encryptedContentsLocalURL;
    NSString * _encryptionScheme;
    long long  _encryptionSource;
    NSString * _ephemeralPublicKey;
    NSURL * _localURL;
    NSDictionary * _manifest;
    NSURL * _passURL;
    NSString * _publicKeyHash;
    NSURL * _remoteURL;
    bool  _required;
    NSString * _seid;
    NSString * _sha1Hex;
    NSNumber * _size;
}

@property (nonatomic, copy) NSURL *encryptedContentsLocalURL;
@property (nonatomic, copy) NSString *encryptionScheme;
@property (nonatomic) long long encryptionSource;
@property (nonatomic, copy) NSString *ephemeralPublicKey;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, copy) NSURL *localURL;
@property (nonatomic, copy) NSDictionary *manifest;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, copy) NSString *publicKeyHash;
@property (nonatomic, readonly) NSString *relativeEncryptedContentsLocalPath;
@property (nonatomic, readonly) NSString *relativeLocalPath;
@property (nonatomic, copy) NSURL *remoteURL;
@property (getter=isRequired, nonatomic) bool required;
@property (nonatomic, copy) NSString *seid;
@property (nonatomic, copy) NSString *sha1Hex;
@property (nonatomic, copy) NSNumber *size;

+ (id)itemWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4;
+ (id)sharedURLSession;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 tryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)downloadAssetWithCompletion:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedContentsLocalURL;
- (id)encryptionScheme;
- (long long)encryptionSource;
- (id)ephemeralPublicKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4;
- (bool)isRequired;
- (bool)isZipFile;
- (unsigned long long)itemType;
- (id)localURL;
- (id)manifest;
- (id)passURL;
- (id)publicKeyHash;
- (id)relativeEncryptedContentsLocalPath;
- (id)relativeLocalPath;
- (id)remoteURL;
- (id)seid;
- (void)setEncryptedContentsLocalURL:(id)arg1;
- (void)setEncryptionScheme:(id)arg1;
- (void)setEncryptionSource:(long long)arg1;
- (void)setEphemeralPublicKey:(id)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setManifest:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setRequired:(bool)arg1;
- (void)setSeid:(id)arg1;
- (void)setSha1Hex:(id)arg1;
- (void)setSize:(id)arg1;
- (id)sha1Hex;
- (id)size;

@end

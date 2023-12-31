
@interface NPKGizmoDatabaseManifestEntry : NSObject {
    NSArray * _localManifestHashes;
    NSArray * _remoteManifestHashes;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSArray *localManifestHashes;
@property (nonatomic, retain) NSArray *remoteManifestHashes;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (id)description;
- (id)localManifestHashes;
- (id)remoteManifestHashes;
- (void)setLocalManifestHashes:(id)arg1;
- (void)setRemoteManifestHashes:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;

@end

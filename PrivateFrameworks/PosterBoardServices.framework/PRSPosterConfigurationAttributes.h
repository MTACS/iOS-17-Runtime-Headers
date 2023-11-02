
@interface PRSPosterConfigurationAttributes : NSObject {
    NSString * _extensionIdentifier;
    NSFileManager * _fileManager;
    NSURL * _identifierURL;
    PRSPosterPath * _path;
    NSUUID * _posterUUID;
    NSURL * _providerURL;
}

@property (nonatomic, readonly) NSString *extensionIdentifier;
@property (nonatomic, readonly, copy) NSURL *identifierURL;
@property (nonatomic, readonly) PRSPosterPath *path;
@property (nonatomic, readonly, copy) NSUUID *posterUUID;
@property (nonatomic, readonly, copy) NSURL *providerURL;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) NSSet *snapshotURLs;

- (void).cxx_destruct;
- (id)_initWithPath:(id)arg1 extensionIdentifier:(id)arg2 posterUUID:(id)arg3 providerURL:(id)arg4 fileManager:(id)arg5;
- (id)extensionIdentifier;
- (id)identifierURL;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithPath:(id)arg1 extensionIdentifier:(id)arg2;
- (id)path;
- (id)posterUUID;
- (id)providerURL;
- (id)role;
- (id)snapshotURLs;

@end

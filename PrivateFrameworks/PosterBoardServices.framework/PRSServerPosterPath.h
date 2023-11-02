
@interface PRSServerPosterPath : PRSPosterPath

@property (nonatomic, readonly, copy) NSURL *identifierURL;
@property (nonatomic, readonly, copy) PRSServerPosterIdentity *identity;
@property (nonatomic, readonly, copy) NSString *identityPathComponent;
@property (nonatomic, readonly, copy) NSURL *instanceURL;
@property (getter=isPersistable, nonatomic, readonly) bool persistable;
@property (nonatomic, readonly, copy) NSURL *providerURL;
@property (nonatomic, readonly, copy) NSURL *supplementURL;
@property (nonatomic, readonly, copy) NSURL *typeURL;
@property (nonatomic, readonly, copy) NSURL *versionsURL;

// Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices

+ (id)pathWithContainerURL:(id)arg1 identity:(id)arg2;
+ (id)pathWithProviderURL:(id)arg1 identity:(id)arg2;

- (id)containerURL;
- (id)extendContentsReadAccessToAuditToken:(id)arg1 error:(out id*)arg2;
- (id)extendInstanceReadAccessToAuditToken:(id)arg1 error:(out id*)arg2;
- (id)identifierURL;
- (id)identity;
- (id)identityPathComponent;
- (id)instanceURL;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPersistable:(id)arg1;
- (bool)isPersistable;
- (bool)isServerPosterPath;
- (id)providerURL;
- (id)supplementURL;
- (id)typeURL;
- (id)versionsURL;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)pbf_ambientConfiguration;
- (id)pbf_sha256Hash;

@end


@interface MPServerObjectDatabaseImportResult : NSObject {
    id  _annotatedPayload;
    NSError * _error;
    NSArray * _playableAssetIdentifiers;
    <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> * _trustProvider;
}

@property (nonatomic, readonly) id annotatedPayload;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *playableAssetIdentifiers;
@property (nonatomic, readonly, copy) <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> *trustProvider;

- (void).cxx_destruct;
- (id)annotatedPayload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)error;
- (id)initWithAnnotatedPayload:(id*)arg1 playableAssetIdentifiers:(id)arg2 trustProvider:(id)arg3 error:(id)arg4;
- (id)playableAssetIdentifiers;
- (id)trustProvider;

@end

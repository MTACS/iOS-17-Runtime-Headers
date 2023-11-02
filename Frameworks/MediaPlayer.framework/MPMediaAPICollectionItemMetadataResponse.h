
@interface MPMediaAPICollectionItemMetadataResponse : NSObject {
    NSArray * _failedItemIdentifiers;
    bool  _isFinalResponse;
    double  _playbackAuthorizationTokenHalfLifeExpiration;
    NSDictionary * _response;
}

@property (nonatomic, readonly, copy) NSArray *failedItemIdentifiers;
@property (nonatomic, readonly) bool isFinalResponse;
@property (nonatomic, readonly) double playbackAuthorizationTokenHalfLifeExpiration;
@property (nonatomic, readonly, copy) NSDictionary *response;

- (void).cxx_destruct;
- (id)failedItemIdentifiers;
- (id)initWithMediaAPICollectionItemMetadataResponse:(id)arg1 authorizationTokenHalfLifeDuration:(double)arg2 failedItemIdentifiers:(id)arg3 isFinalResponse:(bool)arg4;
- (bool)isFinalResponse;
- (double)playbackAuthorizationTokenHalfLifeExpiration;
- (id)response;

@end

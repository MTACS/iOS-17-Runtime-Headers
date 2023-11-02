
@interface ICPlayInfoRequest : ICRequestOperation {
    NSNumber * _DSID;
    NSData * _SICData;
    NSNumber * _contentIdentifier;
    NSString * _playerGUID;
    ICStoreRequestContext * _requestContext;
    ICPlayInfoResponse * _response;
    NSArray * _sinfs;
    NSString * _subscriptionPlaybackType;
}

@property (nonatomic, copy) NSNumber *DSID;
@property (nonatomic, copy) NSData *SICData;
@property (nonatomic, copy) NSNumber *contentIdentifier;
@property (nonatomic, copy) NSString *playerGUID;
@property (nonatomic, copy) NSArray *sinfs;
@property (nonatomic, copy) NSString *subscriptionPlaybackType;

- (void).cxx_destruct;
- (id)DSID;
- (id)SICData;
- (id)_getSinfParamValue:(int)arg1;
- (bool)_hasRentalInfo;
- (id)contentIdentifier;
- (void)execute;
- (id)initWithRequestContext:(id)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (id)playerGUID;
- (void)setContentIdentifier:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setPlayerGUID:(id)arg1;
- (void)setSICData:(id)arg1;
- (void)setSinfs:(id)arg1;
- (void)setSubscriptionPlaybackType:(id)arg1;
- (id)sinfs;
- (id)subscriptionPlaybackType;

@end

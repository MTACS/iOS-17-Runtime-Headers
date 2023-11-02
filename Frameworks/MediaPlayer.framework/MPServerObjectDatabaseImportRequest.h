
@interface MPServerObjectDatabaseImportRequest : NSObject {
    NSDate * _assetURLExpirationDate;
    NSDate * _expirationDate;
    id  _payload;
    NSDate * _playbackAuthorizationTokenHalfLifeDate;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly, copy) NSDate *assetURLExpirationDate;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, retain) id payload;
@property (nonatomic, readonly, copy) NSDate *playbackAuthorizationTokenHalfLifeDate;
@property (nonatomic, retain) ICUserIdentity *userIdentity;

- (void).cxx_destruct;
- (id)_initWithPayload:(id)arg1;
- (id)assetURLExpirationDate;
- (id)expirationDate;
- (id)payload;
- (id)playbackAuthorizationTokenHalfLifeDate;
- (void)setExpirationDate:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (id)userIdentity;

@end

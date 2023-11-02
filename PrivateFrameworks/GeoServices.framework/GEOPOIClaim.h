
@interface GEOPOIClaim : NSObject {
    GEOPDPOIClaim * _poiClaim;
}

@property (nonatomic, readonly) NSURL *claimURL;
@property (getter=isClaimable, nonatomic, readonly) bool claimable;
@property (getter=isClaimed, nonatomic, readonly) bool claimed;

- (void).cxx_destruct;
- (id)claimURL;
- (id)description;
- (id)initWithPOIClaim:(id)arg1;
- (bool)isClaimable;
- (bool)isClaimed;

@end

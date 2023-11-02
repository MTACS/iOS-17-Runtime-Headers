
@interface CKDDeferredRelinquishPlaceholder : NSObject <CKDZoneGatekeeperWaiter> {
    long long  _qualityOfService;
    NSString * _underlyingCKShortDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long qualityOfService;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *underlyingCKShortDescription;

- (void).cxx_destruct;
- (id)ckShortDescription;
- (id)description;
- (id)initWithExistingWaiter:(id)arg1;
- (long long)qualityOfService;
- (id)underlyingCKShortDescription;

@end


@interface FARequestEphemeralSigner : NSObject <FamilyCircle.FARequestSigner> {
    void ephemeralAuthResults;
}

@property (nonatomic, readonly) ACAccount *account;

- (void).cxx_destruct;
- (id)account;
- (id)accountInfoPayload;
- (id)init;
- (id)initWithEphemeralAuthResults:(id)arg1;
- (void)signURLRequest:(id)arg1;

@end

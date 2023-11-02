
@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {
    NSString * _guestIdentifier;
    GKPlayerInternal * _hostPlayerInternal;
}

@property (nonatomic, retain) GKPlayerInternal *hostPlayerInternal;

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)guestIdentifier;
- (id)hostPlayerInternal;
- (id)initWithHostPlayerInternal:(id)arg1 guestIdentifier:(id)arg2;
- (bool)isGuestPlayer;
- (id)playerID;
- (void)setGuestIdentifier:(id)arg1;
- (void)setHostPlayerInternal:(id)arg1;

@end

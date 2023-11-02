
@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal {
    long long  _automatchPosition;
}

@property (nonatomic) long long automatchPosition;
@property (nonatomic, readonly) NSString *automatchPositionDisplayString;

+ (bool)supportsSecureCoding;

- (id)alias;
- (long long)automatchPosition;
- (id)automatchPositionDisplayString;
- (id)gamePlayerID;
- (bool)isAutomatchPlayer;
- (id)playerID;
- (void)setAutomatchPosition:(long long)arg1;
- (id)teamPlayerID;

@end

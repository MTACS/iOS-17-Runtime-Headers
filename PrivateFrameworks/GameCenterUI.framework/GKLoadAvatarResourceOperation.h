
@interface GKLoadAvatarResourceOperation : GKLoadResourceOperation {
    NSString * _playerId;
}

@property (nonatomic, readonly, copy) NSString *playerId;

- (void).cxx_destruct;
- (id)initWithPlayerId:(id)arg1;
- (void)main;
- (id)makePlayerFetchError;
- (id)playerId;

@end

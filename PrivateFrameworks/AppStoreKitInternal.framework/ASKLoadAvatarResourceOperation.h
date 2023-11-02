
@interface ASKLoadAvatarResourceOperation : ASKLoadResourceOperation {
    NSString * _playerId;
}

@property (nonatomic, readonly, copy) NSString *playerId;

+ (id)supportedScheme;

- (void).cxx_destruct;
- (id)initWithPlayerId:(id)arg1;
- (id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2;
- (void)main;
- (id)makePlayerFetchError;
- (id)playerId;

@end

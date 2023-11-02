
@interface PVLivePlayerThrottlingControlParameters : NSObject <NSCopying> {
    NSNumber * _playerBypassRenderLink;
    NSNumber * _playerQueueSize;
    NSNumber * _renderLinkRate;
}

@property (nonatomic, retain) NSNumber *playerBypassRenderLink;
@property (nonatomic, retain) NSNumber *playerQueueSize;
@property (nonatomic, retain) NSNumber *renderLinkRate;

+ (id)CreateControllerParameters:(id)arg1 :(id)arg2 :(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasNilParameter;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)playerBypassRenderLink;
- (id)playerQueueSize;
- (id)renderLinkRate;
- (void)setPlayerBypassRenderLink:(id)arg1;
- (void)setPlayerQueueSize:(id)arg1;
- (void)setRenderLinkRate:(id)arg1;
- (void)updateNilsFrom:(id)arg1;

@end

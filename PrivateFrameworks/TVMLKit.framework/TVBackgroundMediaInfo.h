
@interface TVBackgroundMediaInfo : TVMediaInfo {
    IKAppPlayerBridge * _playerBridge;
}

@property (nonatomic, retain) IKAppPlayerBridge *playerBridge;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (id)playerBridge;
- (void)setPlayerBridge:(id)arg1;

@end

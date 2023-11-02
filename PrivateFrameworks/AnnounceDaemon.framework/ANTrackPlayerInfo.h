
@interface ANTrackPlayerInfo : NSObject {
    NSString * _announcementID;
    bool  _completed;
    AVPlayerItem * _playerItem;
    long long  _trackType;
}

@property (nonatomic, readonly) NSString *announcementID;
@property (nonatomic) bool completed;
@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic, readonly) long long trackType;

- (void).cxx_destruct;
- (id)announcementID;
- (bool)completed;
- (id)description;
- (id)initWithPlayerItem:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3;
- (id)playerItem;
- (void)setCompleted:(bool)arg1;
- (void)setPlayerItem:(id)arg1;
- (long long)trackType;

@end


@interface GKMultiplayerParticipant : NSObject <NSCopying> {
    bool  _isPlaceHolderItem;
    long long  _number;
    GKPlayer * _player;
    long long  _status;
    long long  _type;
}

@property (nonatomic) bool isPlaceHolderItem;
@property (nonatomic, readonly) bool isSharePlayInvitee;
@property (nonatomic) long long number;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic) long long status;
@property (nonatomic, readonly) NSString *statusName;
@property (nonatomic) long long type;

+ (id)allStatuses;
+ (id)stringFromGKMultiplayerParticipantStatus:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceHolderItem;
- (bool)isSharePlayInvitee;
- (long long)number;
- (id)player;
- (void)setIsPlaceHolderItem:(bool)arg1;
- (void)setNumber:(long long)arg1;
- (void)setPlayer:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)status;
- (id)statusName;
- (long long)type;

@end

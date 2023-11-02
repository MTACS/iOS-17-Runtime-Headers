
@interface ASFriendListRow : NSObject {
    ASFriend * _friend;
    _HKFitnessFriendActivitySnapshot * _snapshot;
}

@property (nonatomic, retain) ASFriend *friend;
@property (nonatomic, retain) _HKFitnessFriendActivitySnapshot *snapshot;

- (void).cxx_destruct;
- (id)friend;
- (bool)isEqual:(id)arg1;
- (void)setFriend:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;

@end

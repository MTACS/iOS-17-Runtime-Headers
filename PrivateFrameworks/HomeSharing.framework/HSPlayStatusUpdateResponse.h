
@interface HSPlayStatusUpdateResponse : HSResponse {
    unsigned int  _nextRevisionID;
    unsigned long long  _nowPlayingContainerID;
    unsigned long long  _nowPlayingContainerItemID;
    unsigned long long  _nowPlayingDatabaseID;
    unsigned long long  _nowPlayingItemID;
    NSDictionary * _playStatusInformation;
}

@property (nonatomic) unsigned int nextRevisionID;
@property (nonatomic) unsigned long long nowPlayingContainerID;
@property (nonatomic) unsigned long long nowPlayingContainerItemID;
@property (nonatomic) unsigned long long nowPlayingDatabaseID;
@property (nonatomic) unsigned long long nowPlayingItemID;
@property (nonatomic, copy) NSDictionary *playStatusInformation;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)nextRevisionID;
- (unsigned long long)nowPlayingContainerID;
- (unsigned long long)nowPlayingContainerItemID;
- (unsigned long long)nowPlayingDatabaseID;
- (unsigned long long)nowPlayingItemID;
- (id)playStatusInformation;
- (void)setNextRevisionID:(unsigned int)arg1;
- (void)setNowPlayingContainerID:(unsigned long long)arg1;
- (void)setNowPlayingContainerItemID:(unsigned long long)arg1;
- (void)setNowPlayingDatabaseID:(unsigned long long)arg1;
- (void)setNowPlayingItemID:(unsigned long long)arg1;
- (void)setPlayStatusInformation:(id)arg1;

@end

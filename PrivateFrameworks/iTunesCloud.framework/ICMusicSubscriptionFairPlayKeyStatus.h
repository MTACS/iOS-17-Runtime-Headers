
@interface ICMusicSubscriptionFairPlayKeyStatus : NSObject <NSCopying> {
    unsigned long long  _accountUniqueIdentifier;
    bool  _hasOfflinePlaybackKeys;
    bool  _hasOnlinePlaybackKeys;
}

@property (nonatomic) unsigned long long accountUniqueIdentifier;
@property (nonatomic) bool hasOfflinePlaybackKeys;
@property (nonatomic) bool hasOnlinePlaybackKeys;

- (unsigned long long)accountUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasOfflinePlaybackKeys;
- (bool)hasOnlinePlaybackKeys;
- (id)initWithFairPlaySubscriptionInfo:(struct FPSubscriptionInfo_ { unsigned long long x1; int x2; })arg1;
- (bool)isEqual:(id)arg1;
- (void)setAccountUniqueIdentifier:(unsigned long long)arg1;
- (void)setHasOfflinePlaybackKeys:(bool)arg1;
- (void)setHasOnlinePlaybackKeys:(bool)arg1;

@end

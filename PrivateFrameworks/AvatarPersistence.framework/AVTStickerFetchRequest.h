
@interface AVTStickerFetchRequest : NSObject {
    NSString * _avatarIdentifier;
    long long  _criteria;
    long long  _resultLimit;
    NSString * _stickerIdentifier;
}

@property (nonatomic, readonly, copy) NSString *avatarIdentifier;
@property (nonatomic, readonly) long long criteria;
@property (nonatomic, readonly) long long resultLimit;
@property (nonatomic, readonly, copy) NSString *stickerIdentifier;

+ (id)requestForAllRecentStickers;
+ (id)requestForMostRecentStickersWithResultLimit:(long long)arg1;
+ (id)requestForStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)avatarIdentifier;
- (long long)criteria;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCriteria:(long long)arg1;
- (id)initWithCriteria:(long long)arg1 avatarIdentifier:(id)arg2 stickerIdentifier:(id)arg3;
- (id)initWithCriteria:(long long)arg1 resultLimit:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)resultLimit;
- (id)stickerIdentifier;

@end

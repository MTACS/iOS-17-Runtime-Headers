
@interface ICSharedListeningItem : NSObject <NSCopying> {
    ICLiveLinkIdentity * _contributorIdentity;
    NSString * _identifier;
    bool  _isAutoPlayItem;
    NSString * _mediaIdentifier;
    NSDictionary * _playParams;
}

@property (nonatomic, readonly, copy) ICLiveLinkIdentity *contributorIdentity;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isAutoPlayItem;
@property (nonatomic, readonly, copy) NSString *mediaIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *playParams;
@property (nonatomic, readonly, copy) NSString *shortDescription;

+ (id)itemWithMediaIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_playParamsForPlaybackItemProto:(id)arg1;
- (id)contributorIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)initWithProtobuf:(id)arg1 identity:(id)arg2;
- (bool)isAutoPlayItem;
- (id)mediaIdentifier;
- (id)playParams;
- (void)setIdentifier:(id)arg1;
- (id)shortDescription;

@end

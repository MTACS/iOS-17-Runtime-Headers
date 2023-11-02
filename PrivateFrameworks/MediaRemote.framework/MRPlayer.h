
@interface MRPlayer : NSObject <NSCopying> {
    NSURL * _appIcon;
    unsigned int  _audioSessionID;
    long long  _audioSessionType;
    NSString * _displayName;
    NSString * _identifier;
    NSSet * _mxSessionIDs;
}

@property (nonatomic, copy) NSURL *appIcon;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) long long audioSessionType;
@property (nonatomic, readonly, copy) NSData *data;
@property (getter=isDefaultPlayer, nonatomic, readonly) bool defaultPlayer;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) bool hasAuxiliaryProperties;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSSet *mxSessionIDs;
@property (nonatomic, readonly) MRPlayer *skeleton;

+ (id)anyPlayer;
+ (id)defaultPlayer;

- (void).cxx_destruct;
- (id)appIcon;
- (unsigned int)audioSessionID;
- (long long)audioSessionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)displayName;
- (bool)hasAuxiliaryProperties;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2;
- (bool)isDefaultPlayer;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mxSessionIDs;
- (void)setAppIcon:(id)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setAudioSessionType:(long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMxSessionIDs:(id)arg1;
- (id)skeleton;

@end

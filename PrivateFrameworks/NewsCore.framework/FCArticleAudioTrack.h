
@interface FCArticleAudioTrack : NSObject <FCContentArchivable, NSCopying> {
    FCAVAsset * _asset;
    double  _duration;
    double  _embeddedUpsellEndTime;
    double  _embeddedUpsellStartTime;
    long long  _type;
}

@property (nonatomic, readonly) FCAVAsset *asset;
@property (nonatomic, readonly) FCContentArchive *contentArchive;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double embeddedUpsellEndTime;
@property (nonatomic, readonly) double embeddedUpsellStartTime;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)asset;
- (id)contentArchive;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (double)embeddedUpsellEndTime;
- (double)embeddedUpsellStartTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(long long)arg1 asset:(id)arg2 duration:(double)arg3;
- (id)initWithType:(long long)arg1 asset:(id)arg2 duration:(double)arg3 embeddedUpsellStartTime:(double)arg4 embeddedUpsellEndTime:(double)arg5;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end

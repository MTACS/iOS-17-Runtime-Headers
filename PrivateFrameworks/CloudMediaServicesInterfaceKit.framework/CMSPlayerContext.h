
@interface CMSPlayerContext : NSObject <CMSCoding, NSCopying> {
    NSString * _activityIdentifier;
    NSString * _contentIdentifier;
    long long  _offsetInMillis;
    float  _playbackSpeed;
    NSString * _queueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long offsetInMillis;
@property (nonatomic, readonly) bool offsetIsValid;
@property (nonatomic, readonly) float playbackSpeed;
@property (nonatomic, readonly, copy) NSString *queueIdentifier;
@property (readonly) Class superclass;

+ (id)instanceFromCMSCoded:(id)arg1;

- (void).cxx_destruct;
- (id)activityIdentifier;
- (id)cmsCoded;
- (id)contentIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initForActivity:(id)arg1 queue:(id)arg2 content:(id)arg3 speed:(float)arg4;
- (id)initForActivity:(id)arg1 queue:(id)arg2 content:(id)arg3 speed:(float)arg4 offset:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualContext:(id)arg1;
- (long long)offsetInMillis;
- (bool)offsetIsValid;
- (float)playbackSpeed;
- (id)playerContextWithUpdatedOffset:(long long)arg1;
- (id)playerContextWithUpdatedSpeed:(float)arg1;
- (id)playerContextWithUpdatedSpeed:(float)arg1 offset:(long long)arg2;
- (id)queueIdentifier;

@end

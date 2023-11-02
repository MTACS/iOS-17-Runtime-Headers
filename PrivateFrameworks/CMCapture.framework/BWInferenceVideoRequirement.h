
@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying> {
    BWInferenceVideoFormat * _videoFormat;
    int  _videoStorageType;
}

@property (nonatomic, readonly) BWInferenceVideoFormat *videoFormat;
@property (nonatomic, readonly) int videoStorageType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithAttachedMediaKey:(id)arg1 count:(unsigned long long)arg2;
- (id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2;
- (id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 count:(unsigned long long)arg3;
- (id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 videoStorageType:(int)arg3;
- (id)initWithVideoRequirement:(id)arg1;
- (bool)isSatisfiedByRequirement:(id)arg1;
- (unsigned long long)satisfactionHash;
- (id)videoFormat;
- (int)videoStorageType;

@end

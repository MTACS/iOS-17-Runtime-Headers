
@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement <NSCopying> {
    NSString * _preparedByAttachedMediaKey;
    id /* block */  _videoFormatProvider;
}

@property (nonatomic, readonly, copy) NSString *preparedByAttachedMediaKey;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithAttachedMediaKey:(id)arg1 count:(unsigned long long)arg2;
- (id)initWithAttachedMediaKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 count:(unsigned long long)arg3 videoFormatProvider:(id /* block */)arg4;
- (id)initWithAttachedMediaKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 videoFormatProvider:(id /* block */)arg3;
- (id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 count:(unsigned long long)arg3;
- (id)initWithLazyVideoRequirement:(id)arg1;
- (int)prepareForInputInferenceVideoFormat:(id)arg1;
- (id)preparedByAttachedMediaKey;

@end

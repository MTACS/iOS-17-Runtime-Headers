
@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement <NSCopying> {
    BWInferenceVideoRequirement * _sourceVideoRequirement;
}

@property (nonatomic, readonly) BWInferenceVideoRequirement *sourceVideoRequirement;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithAttachedMediaKey:(id)arg1 sourceVideoRequirement:(id)arg2;
- (id)initWithCloneVideoRequirement:(id)arg1;
- (id)sourceVideoRequirement;
- (id)videoFormat;

@end

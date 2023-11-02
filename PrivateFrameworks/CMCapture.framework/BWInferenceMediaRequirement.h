
@interface BWInferenceMediaRequirement : BWInferenceDataRequirement <NSCopying> {
    NSString * _attachedMediaKey;
    unsigned long long  _count;
}

@property (nonatomic, readonly, copy) NSString *attachedMediaKey;
@property (nonatomic, readonly) unsigned long long count;

- (id)attachedMediaKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)initWithAttachedMediaKey:(id)arg1;
- (id)initWithAttachedMediaKey:(id)arg1 count:(unsigned long long)arg2;
- (id)initWithMediaRequirement:(id)arg1;

@end

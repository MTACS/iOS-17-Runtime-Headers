
@interface PXStoryClipLayoutReuseIdentifier : NSObject <NSCopying> {
    <PXStoryClip> * _clip;
}

@property (nonatomic, readonly) <PXStoryClip> *clip;

- (void).cxx_destruct;
- (id)clip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasResourceEqualTo:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithClip:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

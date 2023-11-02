
@interface ARUISprite : NSObject <NSCopying> {
    unsigned long long  _currentFrameIndex;
    void _firstFrameOrigin;
    unsigned long long  _frameColumns;
    unsigned long long  _frameCount;
    void _frameSize;
    float  _opacity;
    float  _size;
    void _translation;
}

@property (nonatomic) unsigned long long currentFrameIndex;
@property (nonatomic, readonly) void firstFrameOrigin;
@property (nonatomic, readonly) unsigned long long frameColumns;
@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) void frameSize;
@property (nonatomic) float opacity;
@property (nonatomic) float size;
@property (nonatomic, readonly) void textureRect;
@property (nonatomic) void translation;

+ (id)randomSprite;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentFrameIndex;
- (id)description;
- (void)firstFrameOrigin;
- (unsigned long long)frameColumns;
- (unsigned long long)frameCount;
- (void)frameSize;
- (unsigned long long)hash;
- (id)initWithFrameCount:(void *)arg1 frameColumns:(void *)arg2 firstFrameOrigin:(void *)arg3 frameSize:(void *)arg4; // needs 4 arg types, found 2: unsigned long long, unsigned long long
- (id)initWithSprite:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)opacity;
- (void)setCurrentFrameIndex:(unsigned long long)arg1;
- (void)setOpacity:(float)arg1;
- (void)setSize:(float)arg1;
- (void)setTranslation;
- (float)size;
- (void)textureRect;
- (void)translation;

@end

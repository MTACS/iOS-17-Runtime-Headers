
@interface ARUIGridSpriteGenerator : NSObject {
    unsigned long long  _columnsPerSprite;
    unsigned long long  _framesPerSprite;
    unsigned long long  _rowsPerSprite;
    unsigned long long  _spriteCount;
}

+ (id)generatorWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4;

- (void)frameSize;
- (id)generateSprites;
- (id)initWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4;
- (void)originForSpriteAtIndex:(unsigned long long)arg1;
- (id)spriteAtIndex:(unsigned long long)arg1;

@end

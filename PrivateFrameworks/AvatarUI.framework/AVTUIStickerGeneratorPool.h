
@interface AVTUIStickerGeneratorPool : NSObject {
    NSMutableDictionary * _availableStickerGenerators;
    NSMutableDictionary * _inUseStickerGenerators;
    <AVTUILogger> * _logger;
    long long  _maxCount;
}

@property (nonatomic, readonly) NSMutableDictionary *availableStickerGenerators;
@property (nonatomic, readonly) NSMutableDictionary *inUseStickerGenerators;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) long long maxCount;

+ (id)cacheKeyForAvatarRecord:(id)arg1;

- (void).cxx_destruct;
- (id)availableStickerGenerators;
- (id)avatarForRecord:(id)arg1;
- (id)dequeueStickerGeneratorForAvatarRecord:(id)arg1;
- (id)dequeueStickerGeneratorForAvatarRecord:(id)arg1 needAvatar:(bool)arg2;
- (void)didStopUsingStickerGeneratorForRecord:(id)arg1;
- (void)flush;
- (void)flushGeneratorForKey:(id)arg1;
- (void)flushGeneratorForRecord:(id)arg1;
- (id)generatorForAvatarRecord:(id)arg1 inGenerators:(id)arg2;
- (id)inUseStickerGenerators;
- (id)initWithMaxStickerGeneratorCount:(long long)arg1;
- (id)initWithMaxStickerGeneratorCount:(long long)arg1 logger:(id)arg2;
- (id)logger;
- (long long)maxCount;
- (id)stealGeneratorForAvatarRecord:(id)arg1 inGenerators:(id)arg2 needAvatar:(bool)arg3;

@end


@interface ARUISpriteUniformsCacheKey : NSObject {
    unsigned long long  _hashValue;
}

@property (nonatomic, readonly) unsigned long long hashValue;

+ (id)keyForSprite:(id)arg1 context:(id)arg2;

- (unsigned long long)hash;
- (unsigned long long)hashValue;
- (id)initWithSprite:(id)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;

@end

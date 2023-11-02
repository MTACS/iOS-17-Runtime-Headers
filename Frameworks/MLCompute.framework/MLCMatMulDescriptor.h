
@interface MLCMatMulDescriptor : NSObject <NSCopying> {
    float  _alpha;
    bool  _transposesX;
    bool  _transposesY;
}

@property (nonatomic, readonly) float alpha;
@property (nonatomic, readonly) bool transposesX;
@property (nonatomic, readonly) bool transposesY;

+ (id)descriptor;
+ (id)descriptorWithAlpha:(float)arg1 transposesX:(bool)arg2 transposesY:(bool)arg3;

- (float)alpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAlpha:(float)arg1 transposesX:(bool)arg2 transposesY:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)transposesX;
- (bool)transposesY;

@end

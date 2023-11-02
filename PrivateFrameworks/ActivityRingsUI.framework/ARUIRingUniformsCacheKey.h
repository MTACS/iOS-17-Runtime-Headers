
@interface ARUIRingUniformsCacheKey : NSObject {
    unsigned long long  _hashValue;
}

@property (nonatomic, readonly) unsigned long long hashValue;

+ (id)keyForRing:(id)arg1 context:(id)arg2;

- (unsigned long long)hash;
- (unsigned long long)hashValue;
- (id)initWithRing:(id)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;

@end

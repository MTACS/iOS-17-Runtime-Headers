
@interface TTBulletTextAttributesCacheKey : NSObject {
    unsigned long long  _hashValue;
}

@property (nonatomic) unsigned long long hashValue;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (unsigned long long)hashValue;
- (id)initWithTextFont:(id)arg1 paragraphStyle:(id)arg2 zoomFactor:(double)arg3;
- (bool)isEqual:(id)arg1;
- (void)setHashValue:(unsigned long long)arg1;

@end

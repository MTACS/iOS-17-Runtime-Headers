
@interface ICWeakObject : NSObject <NSCopying> {
    unsigned long long  _cachedHash;
    id  _object;
}

@property (nonatomic) unsigned long long cachedHash;
@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (unsigned long long)cachedHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)setCachedHash:(unsigned long long)arg1;

@end

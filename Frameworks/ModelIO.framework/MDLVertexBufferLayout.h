
@interface MDLVertexBufferLayout : NSObject <NSCopying> {
    unsigned long long  _stride;
}

@property (nonatomic) unsigned long long stride;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStride:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setStride:(unsigned long long)arg1;
- (unsigned long long)stride;

@end

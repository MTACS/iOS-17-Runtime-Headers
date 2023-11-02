
@interface PXTuple : NSObject <NSCopying> {
    unsigned long long  _hash;
    NSArray * _objects;
}

@property (nonatomic, readonly) NSArray *objects;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObjects:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objects;

@end

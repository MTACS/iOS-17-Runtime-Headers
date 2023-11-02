
@interface XRSpaceDataToken : NSObject <NSCopying> {
    unsigned long long  _seq;
    id  _tag;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSpaceTag:(id)arg1 sequenceID:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;

@end

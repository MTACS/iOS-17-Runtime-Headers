
@interface FigCaptureFlatPlistEnumerator : NSEnumerator {
    const struct { void *x1; void *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; } * _bplist;
    unsigned long long  _count;
    FigCaptureFlatPlist * _flatPlist;
    unsigned long long  _index;
    unsigned long long  _offset;
}

- (id)allObjects;
- (id)initWithFlatPlist:(id)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (id)nextObject;

@end

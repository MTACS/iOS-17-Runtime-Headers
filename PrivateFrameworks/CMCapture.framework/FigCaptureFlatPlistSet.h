
@interface FigCaptureFlatPlistSet : NSSet {
    const struct { void *x1; void *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; } * _bplist;
    unsigned long long  _count;
    FigCaptureFlatPlist * _flatPlist;
    unsigned long long  _offset;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)initWithFlatPlist:(id)arg1 offset:(unsigned long long)arg2;
- (id)member:(id)arg1;
- (id)objectEnumerator;

@end


@interface QLCacheHole : NSObject {
    unsigned long long  _length;
    unsigned long long  _location;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long location;

+ (id)holeWithLocation:(unsigned long long)arg1 length:(unsigned long long)arg2;

- (id)description;
- (id)initWithLocation:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)location;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end

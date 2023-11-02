
@interface SBLineFragment : NSObject {
    unsigned long long  _index;
    double  _lineWidth;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)fragmentWithIndex:(unsigned long long)arg1 length:(unsigned long long)arg2 lineWidth:(double)arg3;

- (id)description;
- (unsigned long long)index;
- (double)lineWidth;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setIndex:(unsigned long long)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end

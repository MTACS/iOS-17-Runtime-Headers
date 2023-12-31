
@interface _TVStackScrollStop : NSObject {
    long long  _edge;
    double  _offset;
    long long  _sectionIndex;
}

@property (nonatomic) long long edge;
@property (nonatomic) double offset;
@property (nonatomic) long long sectionIndex;

- (long long)edge;
- (id)init;
- (double)offset;
- (long long)sectionIndex;
- (void)setEdge:(long long)arg1;
- (void)setOffset:(double)arg1;
- (void)setSectionIndex:(long long)arg1;

@end

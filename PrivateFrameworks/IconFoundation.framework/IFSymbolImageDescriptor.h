
@interface IFSymbolImageDescriptor : NSObject <NSCopying> {
    long long  _layoutDirection;
    double  _pointSize;
    double  _scale;
    unsigned long long  _symbolSize;
    long long  _symbolWeight;
}

@property (nonatomic) long long layoutDirection;
@property (nonatomic) double pointSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long symbolSize;
@property (nonatomic) long long symbolWeight;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)digest;
- (id)init;
- (long long)layoutDirection;
- (double)pointSize;
- (double)scale;
- (void)setLayoutDirection:(long long)arg1;
- (void)setPointSize:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSymbolSize:(unsigned long long)arg1;
- (void)setSymbolWeight:(long long)arg1;
- (void)setWeight:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)symbolSize;
- (long long)symbolWeight;
- (unsigned long long)weight;

@end

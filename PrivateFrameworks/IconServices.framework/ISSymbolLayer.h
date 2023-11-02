
@interface ISSymbolLayer : ISLayer {
    IFColor * _color;
    double  _fontSize;
    <ISCompositorResource> * _symbol;
    unsigned long long  _symbolSize;
    long long  _symbolWeight;
}

@property (nonatomic, retain) IFColor *color;
@property (nonatomic) double fontSize;
@property (nonatomic, retain) <ISCompositorResource> *symbol;
@property (nonatomic) unsigned long long symbolSize;
@property (nonatomic) long long symbolWeight;

- (void).cxx_destruct;
- (id)color;
- (double)fontSize;
- (id)init;
- (void)setColor:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setSymbol:(id)arg1;
- (void)setSymbolSize:(unsigned long long)arg1;
- (void)setSymbolWeight:(long long)arg1;
- (id)symbol;
- (unsigned long long)symbolSize;
- (long long)symbolWeight;

@end

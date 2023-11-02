
@interface ISDropShaddowEffect : NSObject <ISEffect> {
    double  _blur;
    IFColor * _color;
    struct CGSize { 
        double width; 
        double height; 
    }  _offset;
    double  _scale;
    double  _spread;
}

@property double blur;
@property (retain) IFColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CGSize { double x1; double x2; } offset;
@property double scale;
@property double spread;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)blur;
- (id)color;
- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;
- (id)init;
- (struct CGSize { double x1; double x2; })offset;
- (double)scale;
- (void)setBlur:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setSpread:(double)arg1;
- (double)spread;

@end


@interface ISBorderEffect : NSObject <ISEffect> {
    IFColor * _color;
    double  _lineWidth;
}

@property (retain) IFColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double lineWidth;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)color;
- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;
- (id)initWithLineWidth:(double)arg1 color:(id)arg2;
- (double)lineWidth;
- (void)setColor:(id)arg1;
- (void)setLineWidth:(double)arg1;

@end

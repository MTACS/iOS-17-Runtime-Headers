
@interface ISEmbossedEffect : NSObject <ISEffect> {
    struct CGSize { 
        double width; 
        double height; 
    }  _offset;
    double  _range;
    unsigned long long  _variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CGSize { double x1; double x2; } offset;
@property double range;
@property (readonly) Class superclass;
@property unsigned long long variant;

- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;
- (id)init;
- (struct CGSize { double x1; double x2; })offset;
- (double)range;
- (void)setOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setRange:(double)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (unsigned long long)variant;

@end

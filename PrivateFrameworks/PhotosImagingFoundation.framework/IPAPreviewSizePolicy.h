
@interface IPAPreviewSizePolicy : NSObject {
    NSString * _name;
    IPAImageSizePolicy * _sizePolicy;
    id  _style;
    id /* block */  _styleNeededThreshold;
    id /* block */  _styleProducedThreshold;
    NSString * _suffix;
}

@property (readonly) NSString *name;
@property (retain) NSString *suffix;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 style:(id)arg2 sizePolicy:(id)arg3 styleNeededThreshold:(id /* block */)arg4 styleProducedThreshold:(id /* block */)arg5;
- (id)initWithName:(id)arg1 suffix:(id)arg2 style:(id)arg3 sizePolicy:(id)arg4 styleNeededThreshold:(id /* block */)arg5 styleProducedThreshold:(id /* block */)arg6;
- (struct PFIntSize_st { unsigned long long x1; unsigned long long x2; })integralTransformSize:(struct CGSize { double x1; double x2; })arg1;
- (id)name;
- (void)setSuffix:(id)arg1;
- (id)sizeTransformationPolicy;
- (id)style;
- (bool)styleCanBeProducedFromSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)styleIsNeededForFullSize:(struct CGSize { double x1; double x2; })arg1;
- (id)styleShouldBeProducedFrom:(id /* block */)arg1;
- (id)suffix;
- (struct CGSize { double x1; double x2; })transformSize:(struct CGSize { double x1; double x2; })arg1;

@end

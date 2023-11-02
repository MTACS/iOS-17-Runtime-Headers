
@interface BCVirtualBrtControl : BCBrtControl {
    double  _nits;
}

+ (void)failToCreateDisplaysFor:(double)arg1;
+ (id)newMonitorWithHandler:(id /* block */)arg1 error:(id*)arg2;

- (double)getNitsWithError:(id*)arg1;
- (id)init;
- (bool)setNits:(double)arg1 error:(id*)arg2;

@end

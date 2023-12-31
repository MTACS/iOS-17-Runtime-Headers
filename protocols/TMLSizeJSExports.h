
@protocol TMLSizeJSExports <JSExport>

@required

- (TMLRect *)asRect;
- (TMLSize *)extend:(double)arg1 :(double)arg2;
- (double)height;
- (TMLSize *)max:(double)arg1 :(double)arg2;
- (TMLSize *)min:(double)arg1 :(double)arg2;
- (TMLSize *)scale:(double)arg1 :(double)arg2;
- (double)width;

@end

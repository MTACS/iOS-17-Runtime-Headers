
@protocol GCAxisInput <NSObject>

@required

- (bool)canWrap;
- (bool)isAnalog;
- (double)lastValueLatency;
- (double)lastValueTimestamp;
- (void)setValueDidChangeHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCPhysicalInputElement> *, <GCAxisInput> *, float, void*
- (NSSet *)sources;
- (float)value;
- (id /* block */)valueDidChangeHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, <GCPhysicalInputElement> *, <GCAxisInput> *, float, void*, id, SEL

@end

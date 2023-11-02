
@protocol GCRelativeInput <NSObject>

@required

- (float)delta;
- (id /* block */)deltaDidChangeHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, <GCPhysicalInputElement> *, <GCRelativeInput> *, float, void*, id, SEL
- (bool)isAnalog;
- (double)lastDeltaLatency;
- (double)lastDeltaTimestamp;
- (void)setDeltaDidChangeHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCPhysicalInputElement> *, <GCRelativeInput> *, float, void*
- (NSSet *)sources;

@end

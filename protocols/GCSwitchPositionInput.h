
@protocol GCSwitchPositionInput <NSObject>

@required

- (bool)canWrap;
- (bool)isSequential;
- (double)lastPositionLatency;
- (double)lastPositionTimestamp;
- (long long)position;
- (id /* block */)positionDidChangeHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, <GCPhysicalInputElement> *, <GCSwitchPositionInput> *, long long, void*, id, SEL
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })positionRange;
- (void)setPositionDidChangeHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCPhysicalInputElement> *, <GCSwitchPositionInput> *, long long, void*
- (NSSet *)sources;

@end

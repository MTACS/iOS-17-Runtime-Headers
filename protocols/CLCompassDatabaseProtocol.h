
@protocol CLCompassDatabaseProtocol <CLNotifierServiceProtocol>

@required

- (void)doAsync:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, void*
- (void)doAsync:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, void*, id /* block */, void*, void, id /* block */, void*
- (void)dumpDatabase:(void *)arg1 onCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)getBiasWithMagneticField:(struct { float x1; float x2; float x3; })arg1 acceleration:(struct { float x1; float x2; float x3; })arg2;
- (void)setBias:(struct { float x1; float x2; float x3; })arg1 withMagneticField:(struct { float x1; float x2; float x3; })arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
- (bool)syncgetDoSync:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, void*
- (bool)syncgetLookupBiasWithMagneticField:(struct { float x1; float x2; float x3; })arg1 acceleration:(struct { float x1; float x2; float x3; })arg2 bias:(struct { float x1; float x2; float x3; }*)arg3 level:(int*)arg4 noResults:(bool*)arg5;
- (int)syncgetPendingSetBiasCount;

@end

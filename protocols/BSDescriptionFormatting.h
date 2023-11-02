
@protocol BSDescriptionFormatting

@required

- (id)appendBool:(bool)arg1 withName:(NSString *)arg2;
- (id)appendBool:(bool)arg1 withName:(NSString *)arg2 ifEqualTo:(bool)arg3;
- (id)appendCString:(const char *)arg1 withName:(NSString *)arg2;
- (id)appendClass:(Class)arg1 withName:(NSString *)arg2;
- (void)appendCustomFormatWithName:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BSDescriptionStringAppendTarget> *, void*
- (id)appendDouble:(double)arg1 withName:(NSString *)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendFlag:(long long)arg1 withName:(NSString *)arg2;
- (id)appendFlag:(long long)arg1 withName:(NSString *)arg2 skipIfNotSet:(bool)arg3;
- (id)appendFloat:(double)arg1 withName:(NSString *)arg2;
- (id)appendFloat:(double)arg1 withName:(NSString *)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendInt64:(long long)arg1 withName:(NSString *)arg2;
- (id)appendInt:(int)arg1 withName:(NSString *)arg2;
- (id)appendInteger:(long long)arg1 withName:(NSString *)arg2;
- (id)appendObject:(id)arg1 withName:(NSString *)arg2;
- (id)appendObject:(id)arg1 withName:(NSString *)arg2 skipIfNil:(bool)arg3;
- (id)appendPoint:(struct CGPoint { double x1; double x2; })arg1 withName:(NSString *)arg2;
- (id)appendPointer:(void*)arg1 withName:(NSString *)arg2;
- (void)appendProem:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id)appendQueue:(NSObject<OS_dispatch_queue> *)arg1 withName:(NSString *)arg2;
- (id)appendRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withName:(NSString *)arg2;
- (id)appendSelector:(SEL)arg1 withName:(NSString *)arg2;
- (id)appendSize:(struct CGSize { double x1; double x2; })arg1 withName:(NSString *)arg2;
- (void)appendString:(NSString *)arg1 withName:(NSString *)arg2;
- (void)appendString:(NSString *)arg1 withName:(NSString *)arg2 skipIfEmpty:(bool)arg3;
- (id)appendTimeInterval:(double)arg1 withName:(NSString *)arg2 decomposeUnits:(bool)arg3;
- (id)appendUInt64:(unsigned long long)arg1 withName:(NSString *)arg2;
- (id)appendUInt64:(unsigned long long)arg1 withName:(NSString *)arg2 format:(long long)arg3;
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(NSString *)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(NSString *)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(NSString *)arg2 format:(long long)arg3;
- (id)appendVersionedPID:(long long)arg1 withName:(NSString *)arg2;

@end

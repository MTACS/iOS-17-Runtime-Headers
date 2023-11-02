
@interface PXISOFormatter : NSNumberFormatter

+ (id)stringForObjectValue:(id)arg1;

- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)stringForObjectValue:(id)arg1;

@end

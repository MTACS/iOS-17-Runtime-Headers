
@interface DDScannerService : NSObject

+ (void)appendWatchOSLinksToString:(id)arg1;
+ (void)cancelJob:(long long)arg1;
+ (id)scanQuery:(struct __DDScanQuery { }*)arg1 configuration:(id)arg2;
+ (long long)scanQuery:(struct __DDScanQuery { }*)arg1 configuration:(id)arg2 completionBlock:(id /* block */)arg3;
+ (id)scanString:(id)arg1;
+ (long long)scanString:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)scanString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 configuration:(id)arg3;
+ (long long)scanString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 configuration:(id)arg3 completionBlock:(id /* block */)arg4;

@end

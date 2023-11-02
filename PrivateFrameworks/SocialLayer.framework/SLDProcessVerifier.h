
@interface SLDProcessVerifier : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_staticTestingKey;
    void useStaticKeyForTesting;
}

+ (id)tagDataFromString:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)signProcess:(id)arg1 tag:(id)arg2 error:(id*)arg3;
- (id)verifyData:(id)arg1 tag:(id)arg2 error:(id*)arg3;

@end

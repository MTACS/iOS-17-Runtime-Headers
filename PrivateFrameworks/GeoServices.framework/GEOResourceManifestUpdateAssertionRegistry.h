
@interface GEOResourceManifestUpdateAssertionRegistry : NSObject <GEOPListStateCapturing> {
    NSMutableArray * _assertions;
    geo_isolater * _isolation;
    unsigned long long  _stateCaptureHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)activeAssertionsDescription;
- (id)addAssertionForProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3;
- (id)addInternalAssertionForReason:(id)arg1;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (bool)hasActiveAssertions;
- (id)init;
- (void)removeAssertion:(id)arg1;

@end

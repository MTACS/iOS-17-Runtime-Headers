
@interface XRCapabilityRegistry : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * _abandonedRecoveries;
    NSMutableDictionary * _capabilityRanges;
    NSMutableDictionary * _unimplementedRecoveries;
}

+ (id)applicationCapabilities;
+ (void)initialize;

- (void).cxx_destruct;
- (id)abandonedRecoveryForCapability:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithRanges:(id)arg1 unimplementedRecoveries:(id)arg2 abandonedRecoveries:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)registerCapability:(id)arg1 versions:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAbandonedRecoverySuggestion:(id)arg1 forCapability:(id)arg2;
- (void)setUnimplementedRecoverySuggestion:(id)arg1 forCapability:(id)arg2;
- (unsigned long long)supportForCapability:(id)arg1 versions:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })supportedVersionsForCapability:(id)arg1;
- (id)unimplementedRecoveryForCapability:(id)arg1;

@end

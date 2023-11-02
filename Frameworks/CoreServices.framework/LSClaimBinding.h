
@interface LSClaimBinding : NSObject <LSDetachable, NSCopying, NSSecureCoding> {
    LSBundleRecord * _bundleRecord;
    LSClaimRecord * _claimRecord;
    UTTypeRecord * _typeRecord;
}

@property (readonly) LSBundleRecord *bundleRecord;
@property (readonly) LSClaimRecord *claimRecord;
@property (readonly) UTTypeRecord *typeRecord;

+ (id)_claimBindingsForBindingEvaluator:(const void*)arg1 error:(id*)arg2;
+ (id)claimBindingsWithConfiguration:(id)arg1 error:(id*)arg2;
+ (id)claimBindingsWithTypeIdentifier:(id)arg1 error:(id*)arg2;
+ (id)claimBindingsWithURL:(id)arg1 error:(id*)arg2;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithBindingEvaluator:(const void*)arg1 error:(id*)arg2;
- (id)_initWithClaimRecord:(id)arg1 typeRecord:(id)arg2 bundleRecord:(id)arg3;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 binding:(const struct LSBinding { unsigned int x1; struct LSBundleData {} *x2; unsigned int x3; struct { /* ? */ } *x4; id x5; id x6; }*)arg2 coreTypesBundleRecord:(id*)arg3 typeRecord:(id)arg4 error:(id*)arg5;
- (id)bundleRecord;
- (id)claimRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)detach;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithTypeIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)typeRecord;

@end

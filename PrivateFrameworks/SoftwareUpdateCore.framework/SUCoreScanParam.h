
@interface SUCoreScanParam : NSObject <NSSecureCoding> {
    SUCoreDescriptor * _descriptor;
    NSError * _error;
    SUCoreDescriptor * _fallbackDescriptor;
    SUCoreDescriptor * _majorPrimaryDescriptor;
    SUCoreDescriptor * _majorSecondaryDescriptor;
    SUCoreDescriptor * _minorPrimaryDescriptor;
    SUCoreDescriptor * _minorSecondaryDescriptor;
    long long  _resultCode;
}

@property (nonatomic, retain) SUCoreDescriptor *descriptor;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) SUCoreDescriptor *fallbackDescriptor;
@property (nonatomic, retain) SUCoreDescriptor *majorPrimaryDescriptor;
@property (nonatomic, retain) SUCoreDescriptor *majorSecondaryDescriptor;
@property (nonatomic, retain) SUCoreDescriptor *minorPrimaryDescriptor;
@property (nonatomic, retain) SUCoreDescriptor *minorSecondaryDescriptor;
@property (nonatomic) long long resultCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)fallbackDescriptor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1 withFallbackDescriptor:(id)arg2;
- (id)initWithMajorPrimaryDescriptor:(id)arg1 majorSecondaryDescriptor:(id)arg2 minorPrimaryDescriptor:(id)arg3 minorSecondaryDescriptor:(id)arg4;
- (id)initWithResult:(long long)arg1 withError:(id)arg2;
- (id)majorPrimaryDescriptor;
- (id)majorSecondaryDescriptor;
- (id)minorPrimaryDescriptor;
- (id)minorSecondaryDescriptor;
- (long long)resultCode;
- (void)setDescriptor:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFallbackDescriptor:(id)arg1;
- (void)setMajorPrimaryDescriptor:(id)arg1;
- (void)setMajorSecondaryDescriptor:(id)arg1;
- (void)setMinorPrimaryDescriptor:(id)arg1;
- (void)setMinorSecondaryDescriptor:(id)arg1;
- (void)setResultCode:(long long)arg1;
- (id)summary;

@end


@protocol HMBModelNativeCKWrapper <HMBModelObjectCoder>

@required

+ (void)applyNativeCKValue:(id <CKRecordValue>)arg1 fromSource:(unsigned long long)arg2 associatingWith:(HMBModelContainer *)arg3 toModel:(HMBModel *)arg4 propertyNamed:(NSString *)arg5;

- (<CKRecordValue> *)nativeCKValueWithEncodingContext:(HMBModelContainerEncodingContext *)arg1 error:(id*)arg2;

@optional

+ (bool)includeInModelEncoding;

@end

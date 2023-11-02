
@interface LSHRNSupport : NSObject

+ (bool)deviceConfiguredForHRN;
+ (void)invalidateCache;
+ (void)setActivationRecordOverride:(bool)arg1;
+ (void)setActivationRecordOverrideNil;
+ (void)setFeatureFlagOverride:(bool)arg1;
+ (id)vendorIDFromVendorName:(id)arg1 seedData:(id)arg2 error:(id*)arg3;

@end

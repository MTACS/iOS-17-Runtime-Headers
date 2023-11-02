
@interface BPSFollowUpController : NSObject

+ (id)_currentDevice;
+ (id)_domainAccessorForDevice:(id)arg1;
+ (void)addFollowUpForIdentifier:(id)arg1 withAttributes:(id)arg2 withCompletion:(id /* block */)arg3;
+ (id)baseDomainIdentifier;
+ (void)markSkippedSetupPaneClass:(Class)arg1 forDevice:(id)arg2;
+ (void)markSkippedSetupPaneClassForCurrentDevice:(Class)arg1;
+ (void)removeFollowUpForIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)removeSkippedPaneClass:(Class)arg1 forDevice:(id)arg2;
+ (void)removeSkippedPaneClassForCurrentDevice:(Class)arg1;
+ (id)skippedSetupPaneClassesForCurrentDevice;
+ (id)skippedSetupPaneClassesForDevice:(id)arg1;

@end

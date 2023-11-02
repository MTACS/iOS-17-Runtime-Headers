
@interface SUDownloadPolicyFactory : NSObject

+ (id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(bool)arg4;
+ (id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2;
+ (int)downloadPolicyTypeForClass:(id)arg1;
+ (id)userDownloadPolicyForDescriptor:(id)arg1;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 allowCellularOverride:(bool)arg3;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(bool)arg4;

@end

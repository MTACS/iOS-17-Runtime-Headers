
@interface GEOAPUploadPolicies : NSObject {
    NSMutableArray * _configListeners;
    NSObject<OS_dispatch_queue> * _isoQueue;
    NSMutableDictionary * _policyDict;
}

+ (id)sharedPolicies;

- (void).cxx_destruct;
- (void)_updatePolicyConfigForUploadPolicyConfigType:(int)arg1 configKey:(struct { struct { unsigned int x_1_1_1; void *x_1_1_2; } x1; })arg2;
- (id)init;
- (double)ttlForUploadPolicyType:(int)arg1;
- (id)uploadPolicyForUploadPolicyType:(int)arg1;

@end

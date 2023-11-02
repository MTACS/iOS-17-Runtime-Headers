
@protocol CoreTelephonyClientDataUsagePolicyDelegateInternal <NSObject>

@optional

- (void)appDataUsagePolicyChange:(CTDataUsagePoliciesWrapper *)arg1;
- (void)appDataUsagePolicyRemoved:(NSSet *)arg1;

@end

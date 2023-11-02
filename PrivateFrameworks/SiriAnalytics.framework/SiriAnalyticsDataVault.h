
@interface SiriAnalyticsDataVault : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  containingDirectory;
}

- (void).cxx_destruct;
- (id)init;
- (void)migrate;
- (id)vendAccessFor:(long long)arg1 withEntitlements:(id)arg2 auditToken:(struct { unsigned int x1[8]; })arg3 readonly:(bool)arg4 error:(id*)arg5;

@end

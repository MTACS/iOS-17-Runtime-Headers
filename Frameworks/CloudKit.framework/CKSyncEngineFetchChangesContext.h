
@interface CKSyncEngineFetchChangesContext : NSObject <CKPropertiesDescription> {
    CKSyncEngineFetchChangesOptions * _options;
    long long  _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) CKSyncEngineFetchChangesOptions *options;
@property (readonly) long long reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (id)description;
- (id)init;
- (id)initWithReason:(long long)arg1 options:(id)arg2;
- (id)options;
- (long long)reason;
- (id)redactedDescription;

@end


@interface PKSubcredentialProvisioningSessionOperation : PKSubcredentialProvisioningOperation <PKSessionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;

@end

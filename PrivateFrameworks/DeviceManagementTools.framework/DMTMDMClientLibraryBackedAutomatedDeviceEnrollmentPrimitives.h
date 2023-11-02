
@interface DMTMDMClientLibraryBackedAutomatedDeviceEnrollmentPrimitives : NSObject <DMTAutomatedDeviceEnrollmentPrimitives> {
    DEPClient * _DEPClient;
}

@property (nonatomic, readonly) DEPClient *DEPClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)DEPClient;
- (void)enrollWithNonce:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)init;

@end

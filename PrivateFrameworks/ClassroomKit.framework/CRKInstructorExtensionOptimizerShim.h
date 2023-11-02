
@interface CRKInstructorExtensionOptimizerShim : NSObject <CRKInstructorExtension>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)didAcceptAdminTransport:(id)arg1;

@end

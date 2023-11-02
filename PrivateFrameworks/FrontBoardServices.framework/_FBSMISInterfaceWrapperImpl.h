
@interface _FBSMISInterfaceWrapperImpl : NSObject <_FBSMISInterfaceWrapper>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (int)signatureVersion:(id)arg1 version:(out unsigned int*)arg2;
- (int)validateSignatureForPath:(id)arg1 options:(id)arg2 userInfo:(out id*)arg3;

@end

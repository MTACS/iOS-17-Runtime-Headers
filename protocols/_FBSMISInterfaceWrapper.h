
@protocol _FBSMISInterfaceWrapper <NSObject>

@required

- (int)signatureVersion:(NSString *)arg1 version:(out unsigned int*)arg2;
- (int)validateSignatureForPath:(NSString *)arg1 options:(NSDictionary *)arg2 userInfo:(out id*)arg3;

@end

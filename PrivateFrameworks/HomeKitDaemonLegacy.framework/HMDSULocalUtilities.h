
@interface HMDSULocalUtilities : HMFObject

+ (id)descriptorFromControllerStatus:(id)arg1 controllerDescriptor:(id)arg2 errorCode:(id)arg3;
+ (void)parseProductVersion:(id)arg1 intoMajorVersion:(id*)arg2 minorVersion:(id*)arg3 updateVersion:(id*)arg4;
+ (id)progressFromControllerProgress:(id)arg1;

@end


@interface APFPDIWrapper : NSObject

+ (int)FPDICreateContext:(void**)arg1 withAttribute:(void*)arg2 initRequest:(void**)arg3 initRequestLength:(unsigned int*)arg4;
+ (int)FPDIDestroyAllContext;
+ (int)FPDIDestroyAllNonStashedContexts;
+ (int)FPDIDestroyAttribute:(void**)arg1;
+ (int)FPDIDestroyContext:(void**)arg1;
+ (int)FPDIDestroyData:(void**)arg1;
+ (int)FPDIInitAttribute:(void**)arg1;
+ (int)FPDIInitContext:(void*)arg1 withInitResponse:(void*)arg2 initResponseLength:(unsigned int)arg3 setupRequest:(void**)arg4 setupRequestLength:(unsigned int*)arg5;
+ (int)FPDISetHighPrivacyLevelForAttribute:(void*)arg1;
+ (int)FPDISetStashingIsEnabled:(bool)arg1 forAttribute:(void*)arg2;
+ (int)FPDISetupContext:(void*)arg1 withSetupResponse:(void*)arg2 setupResponseLength:(unsigned int)arg3;
+ (int)FPDISignWithContext:(void*)arg1 message:(char *)arg2 messageLength:(unsigned int)arg3 rawSignature:(void**)arg4 rawSignatureLength:(unsigned int*)arg5;

@end

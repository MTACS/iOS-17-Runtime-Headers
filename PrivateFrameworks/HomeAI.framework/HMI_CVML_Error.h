
@interface HMI_CVML_Error : NSObject

+ (id)createNSErrorWithStatus:(long long)arg1 andMessage:(id)arg2;
+ (id)createNSExceptionWithStatus:(long long)arg1 andMessage:(id)arg2;

@end

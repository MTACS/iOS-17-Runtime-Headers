
@protocol HMBQueryableModelFieldCoder <NSObject>

@required

+ (<HMBQueryableModelFieldCoder> *)hmbDecodeQueryableParameter:(NSData *)arg1;
+ (NSData *)hmbEncodeQueryableParameter:(id <HMBQueryableModelFieldCoder>)arg1;

@optional

+ (NSString *)hmbDescriptionForEncodedQueryableVariable:(NSData *)arg1;

@end


@interface APCCodecInfo : NSObject

+ (Class)configurationClassForName:(id)arg1;
+ (bool)isSupportedCodecCapability:(id)arg1;
+ (bool)isSupportedCodecConfiguration:(id)arg1;
+ (id)supportedConfigurationClasses;
+ (id)supportedDecoders;
+ (id)supportedEncoders;

@end

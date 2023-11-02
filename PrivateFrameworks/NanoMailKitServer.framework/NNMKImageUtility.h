
@interface NNMKImageUtility : NSObject

+ (void)scaleImageFromData:(id)arg1 destinationData:(id)arg2 maxWidth:(float)arg3;
+ (void)scaleImageFromData:(id)arg1 destinationURL:(id)arg2 maxWidth:(float)arg3;
+ (void)scaleImageFromURL:(id)arg1 destinationURL:(id)arg2 maxWidth:(float)arg3;
+ (void)scaleImageFromURL:(id)arg1 imageData:(id)arg2 destinationURL:(id)arg3 destinationData:(id)arg4 maxWidth:(float)arg5;

@end

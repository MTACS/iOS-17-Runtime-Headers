
@protocol WFFileLocationRepresenting <NSObject>

@required

+ (bool)canRepresentURL:(NSURL *)arg1;
+ (Class)supportedClassForURL:(NSURL *)arg1;

@end

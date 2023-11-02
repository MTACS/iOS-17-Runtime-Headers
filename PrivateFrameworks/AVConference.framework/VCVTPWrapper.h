
@interface VCVTPWrapper : NSObject

+ (id)connectionContext;
+ (void)startVTP;
+ (void)stopVTP;
+ (id)targetQueue;

@end


@interface SBFScheduler : NSObject

+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)mainScheduler;

@end

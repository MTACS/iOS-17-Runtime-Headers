
@interface TRITaskSupport : NSObject <TRITaskSetProviding>

+ (id)sharedInstance;

- (id)XPCTaskAllowlist;
- (Class)taskClassForTaskType:(int)arg1;

@end

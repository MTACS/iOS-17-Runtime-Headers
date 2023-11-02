
@interface BGTaskSchedulerProxy : NSObject

+ (id)shared;

- (bool)registerForTaskWithIdentifier:(id)arg1 launchHandler:(id /* block */)arg2;

@end

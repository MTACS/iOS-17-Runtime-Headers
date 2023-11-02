
@interface AVTTransitionSchedulerFactory : NSObject

+ (id)concurrentTransitionSchedulerWithEventHandler:(id /* block */)arg1 delay:(double)arg2;
+ (id)synchronousTransitionSchedulerWithEventHandler:(id /* block */)arg1;

@end


@interface FBAsynchronousShutdownTask : NSObject {
    double  _interval;
    NSString * _name;
}

+ (void)startTaskWithName:(id)arg1 timeout:(double)arg2 workItem:(id /* block */)arg3;
+ (void)waitForTasks;

- (void).cxx_destruct;

@end

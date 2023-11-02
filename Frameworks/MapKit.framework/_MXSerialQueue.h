
@interface _MXSerialQueue : NSObject {
    NSObject<OS_dispatch_group> * _previousTaskGroup;
}

+ (id)taskCompletionQueue;
+ (id)taskInsertionQueue;
+ (id)taskQueue;

- (void).cxx_destruct;
- (void)addTask:(id /* block */)arg1;
- (id)init;

@end

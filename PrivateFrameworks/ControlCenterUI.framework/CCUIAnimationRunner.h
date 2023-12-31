
@interface CCUIAnimationRunner : NSObject {
    NSObject<OS_dispatch_group> * _previousAnimationGroup;
}

+ (void)_runC2AnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)_runCAAnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)runner;

- (void).cxx_destruct;
- (void)additivelyRunAnimationBatch:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)runAnimationBatch:(id)arg1 withCompletionBlock:(id /* block */)arg2;

@end

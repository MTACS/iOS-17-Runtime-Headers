
@interface SBFObserver : NSObject

+ (id)observerWithResultBlock:(id /* block */)arg1;
+ (id)observerWithResultBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
+ (void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3;
+ (void)sendObserver:(id)arg1 resultsOfBlock:(id /* block */)arg2;

@end

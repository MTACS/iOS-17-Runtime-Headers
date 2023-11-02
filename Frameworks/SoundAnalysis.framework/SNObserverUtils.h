
@interface SNObserverUtils : NSObject

+ (id /* block */)appendToCompletionHandler:(id /* block */)arg1 other:(id /* block */)arg2;
+ (id /* block */)appendToObserverCompletionHandler:(id /* block */)arg1 other:(id /* block */)arg2;
+ (id /* block */)appendToObserverResultsHandler:(id /* block */)arg1 other:(id /* block */)arg2;
+ (id /* block */)appendToResultsHandler:(id /* block */)arg1 other:(id /* block */)arg2;
+ (id /* block */)completionHandlerForRequest:(id)arg1 observer:(id)arg2 retainObserverWeakly:(bool)arg3;
+ (id /* block */)completionHandlerForRequest:(id)arg1 stronglyRetainedObserver:(id)arg2;
+ (id /* block */)completionHandlerForRequest:(id)arg1 weaklyRetainedObserver:(id)arg2;
+ (id /* block */)ignoredCompletionHandler;
+ (id /* block */)ignoredObserverCompletionHandler;
+ (id /* block */)ignoredObserverResultsHandler;
+ (id /* block */)ignoredResultsHandler;
+ (id /* block */)observerCompletionHandlerForObserver:(id)arg1 retainObserverWeakly:(bool)arg2;
+ (id /* block */)observerCompletionHandlerForStronglyRetainedObserver:(id)arg1;
+ (id /* block */)observerCompletionHandlerForWeaklyRetainedObserver:(id)arg1;
+ (id /* block */)observerResultsHandlerForObserver:(id)arg1 retainObserverWeakly:(bool)arg2;
+ (id /* block */)observerResultsHandlerForStronglyRetainedObserver:(id)arg1;
+ (id /* block */)observerResultsHandlerForWeaklyRetainedObserver:(id)arg1;
+ (id)prependHandlersToObserver:(id)arg1 retainObserverWeakly:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (id)prependHandlersToObserver:(id)arg1 retainObserverWeakly:(bool)arg2 resultsHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (id /* block */)resultsHandlerForRequest:(id)arg1 observer:(id)arg2 retainObserverWeakly:(bool)arg3;
+ (id /* block */)resultsHandlerForRequest:(id)arg1 stronglyRetainedObserver:(id)arg2;
+ (id /* block */)resultsHandlerForRequest:(id)arg1 weaklyRetainedObserver:(id)arg2;
+ (void)sendCompletionForRequest:(id)arg1 toObserver:(id)arg2;
+ (void)sendError:(id)arg1 forRequest:(id)arg2 toObserver:(id)arg3;
+ (void)sendError:(id)arg1 toObservers:(id)arg2;
+ (void)sendTerminationWithOptionalError:(id)arg1 forRequest:(id)arg2 toObserver:(id)arg3;

- (id)init;

@end


@interface SearchUI.SearchUISportsKitWrapper : NSObject

+ (void)checkForSessionWithCanonicalId:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)createSessionWithCanonicalId:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)destroySessionWithCanonicalId:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)liveActivitiesEnabledWithCompletionBlock:(id /* block */)arg1;

- (id)init;

@end

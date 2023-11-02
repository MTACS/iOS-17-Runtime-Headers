
@interface _DKSyncErrors : NSObject

+ (id)couldNotSaveForSync;
+ (id)disabled;
+ (id)domain;
+ (id)failedToApplyRemoteChanges;
+ (id)failedToFetchChanges;
+ (id)internalFailure;
+ (id)invalidData;
+ (id)invalidRequest;
+ (id)invalidResponse;
+ (id)missingHighWaterMark;
+ (id)temporaryFailure;
+ (id)unavailableForCurrentUser;

@end

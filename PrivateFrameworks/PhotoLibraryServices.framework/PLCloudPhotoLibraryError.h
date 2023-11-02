
@interface PLCloudPhotoLibraryError : NSObject

+ (id)createErrorWithType:(long long)arg1;
+ (id)createErrorWithType:(long long)arg1 withDebugMessage:(id)arg2;
+ (id)userMessageForErrorType:(long long)arg1;

@end


@interface DEDFBKFeedbackUpload : NSObject

+ (void)cleanUpIfNeeded;
+ (void)cleanUpIfNeededWithDefaults:(id)arg1;
+ (void)compactMapOnFeedbackUploadsWithUserDefaults:(id)arg1 block:(id /* block */)arg2;
+ (void)didFinishUploadOnBugSessionIdentifier:(id)arg1;
+ (void)didFinishUploadOnBugSessionIdentifier:(id)arg1 withDefaults:(id)arg2;

@end


@interface WFOnScreenContentService : NSObject

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)sharedService;

- (void)getOnScreenContentWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)getOnScreenContentWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)getOnScreenContentForInputContentClasses:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)populateOutputFromNodeRecursively:(id)arg1 outputCollection:(id)arg2;

@end


@interface ASVInlinePreviewFactory : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSExtension * _extension;
    <ARQLInlineService3> * _sharedInlineService;
    UIViewController * _sharedRemoteViewController;
}

@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) <ARQLInlineService3> *sharedInlineService;

+ (id)shared;

- (void).cxx_destruct;
- (void)_getSharedInlineServiceWithCompletionHandler:(id /* block */)arg1;
- (void)createFullscreenInstanceWithUUID:(id)arg1 initialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 previewOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)extension;
- (void)getSharedInlineServiceWithCompletionHandler:(id /* block */)arg1;
- (void)handleInterruptionOrInvalidation;
- (id)init;
- (id)sharedInlineService;

@end

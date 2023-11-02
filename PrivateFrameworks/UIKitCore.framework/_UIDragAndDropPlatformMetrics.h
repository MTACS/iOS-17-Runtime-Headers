
@interface _UIDragAndDropPlatformMetrics : NSObject <_UIVisualStyleProviding> {
    id /* block */  _defaultPreviewOutlineProvider;
    id /* block */  _playDropFeedback;
    struct CGSize { 
        double width; 
        double height; 
    }  _previewMinimumSize;
}

@property (nonatomic, copy) id /* block */ defaultPreviewOutlineProvider;
@property (nonatomic, copy) id /* block */ playDropFeedback;
@property (nonatomic) struct CGSize { double x1; double x2; } previewMinimumSize;

- (void).cxx_destruct;
- (id /* block */)defaultPreviewOutlineProvider;
- (id)init;
- (id /* block */)playDropFeedback;
- (struct CGSize { double x1; double x2; })previewMinimumSize;
- (void)setDefaultPreviewOutlineProvider:(id /* block */)arg1;
- (void)setPlayDropFeedback:(id /* block */)arg1;
- (void)setPreviewMinimumSize:(struct CGSize { double x1; double x2; })arg1;

@end

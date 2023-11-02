
@protocol AVTAvatarDisplayingController <AVTObjectViewController>

@required

- (<AVTAvatarDisplayingControllerDelegate> *)delegate;
- (void)displayAvatarForRecord:(id <AVTAvatarRecord>)arg1 animated:(bool)arg2;
- (id)initWithDataSource:(AVTAvatarRecordDataSource *)arg1 environment:(AVTUIEnvironment *)arg2;
- (void)prepareToTransitionToVisible:(bool)arg1 completionHandler:(id /* block */*)arg2;
- (void)prepareViewWithLayout:(id <AVTViewCarouselLayout>)arg1;
- (void)reloadData;
- (void)setDelegate:(id <AVTAvatarDisplayingControllerDelegate>)arg1;
- (void)stopUsingAVTViewSessionSynchronously:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)useAVTViewFromSession:(AVTViewSession *)arg1 withLayout:(id <AVTViewCarouselLayout>)arg2;

@end

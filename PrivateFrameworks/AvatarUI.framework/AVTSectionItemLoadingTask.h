
@interface AVTSectionItemLoadingTask : NSObject <AVTPreloadingTask> {
    id /* block */  _completionHandler;
    <AVTAvatarAttributeEditorSectionItemPrefetching> * _sectionItem;
    bool  canceled;
}

@property (getter=isCanceled) bool canceled;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) <AVTAvatarAttributeEditorSectionItemPrefetching> *sectionItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)initWithSectionItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isCanceled;
- (id)sectionItem;
- (void)setCanceled:(bool)arg1;

@end

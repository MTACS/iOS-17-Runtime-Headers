
@interface SYContentItemPreviewManager : NSObject

+ (void)_loadPreviewForAppContentItem:(id)arg1 completion:(id /* block */)arg2;
+ (void)_loadPreviewMetadataForItem:(id)arg1 fullDetail:(bool)arg2 completion:(id /* block */)arg3;
+ (void)_loadPreviewUsingLPForItem:(id)arg1 fullDetail:(bool)arg2 completion:(id /* block */)arg3;
+ (void)loadPreviewDataForItems:(id)arg1 fullDetail:(bool)arg2 didFinishLoadingPreviewHandler:(id /* block */)arg3;

@end

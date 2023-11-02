
@interface FBKAttachmentViewingControllerSelector : NSObject

+ (id)_opaqueVCWithItem:(id)arg1;
+ (id)controllerForAttachment:(id)arg1;
+ (id)controllerForItem:(id)arg1;
+ (id)controllerForUrl:(id)arg1;
+ (id)controllerForUrl:(id)arg1 useFallback:(bool)arg2;
+ (bool)fallbackToOpaqueViewer;

@end

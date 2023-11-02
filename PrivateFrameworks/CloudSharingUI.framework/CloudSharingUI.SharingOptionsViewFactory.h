
@interface CloudSharingUI.SharingOptionsViewFactory : NSObject

+ (id)createCollaborationShareOptionsView:(id)arg1 layoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 userDidChangeOption:(id /* block */)arg3 contentSizeDidChange:(id /* block */)arg4;
+ (id)createSharingOptionsView:(id)arg1 userDidChangeOption:(id /* block */)arg2;

- (id)init;

@end

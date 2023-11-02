
@interface CSSharingOptionsViewController : UIViewController {
    NSString * _hostBundleID;
    id /* block */  _sourceAppBundleIDDidChangeBlock;
}

@property (nonatomic, copy) NSString *hostBundleID;

- (void).cxx_destruct;
- (id)hostBundleID;
- (id)initWithCollaborationSharingOptions:(id)arg1 layoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 userDidChangeOption:(id /* block */)arg3 contentSizeDidChange:(id /* block */)arg4;
- (id)initWithCollaborationSharingOptionsView:(id)arg1 userDidChangeOption:(id /* block */)arg2;
- (id)initWithSharingOptionsView:(id)arg1 userDidChangeOption:(id /* block */)arg2;
- (void)setHostBundleID:(id)arg1;

@end


@interface AUAudioUnitRemoteViewController : _UIRemoteViewController <AUAudioUnitViewControllerHostInterface> {
    bool  _sizePending;
}

+ (void)_fetchViewController:(id)arg1 requestIdentifier:(id)arg2 completion:(id /* block */)arg3;
+ (void)_fetchViewControllerForExtension:(id)arg1 inputItems:(id)arg2 completion:(id /* block */)arg3;

@end

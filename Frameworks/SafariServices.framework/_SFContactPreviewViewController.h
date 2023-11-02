
@interface _SFContactPreviewViewController : UINavigationController {
    id /* block */  _beforeDismissHandler;
    CNContactViewController * _contactViewController;
    bool  _deleteFileWhenDone;
    NSString * _filePath;
    NSURL * _sourceURL;
}

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_presentActivityViewController:(id)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 sourceURL:(id)arg2 deleteFileWhenDone:(bool)arg3 beforeDismissHandler:(id /* block */)arg4;
- (void)viewWillDisappear:(bool)arg1;

@end

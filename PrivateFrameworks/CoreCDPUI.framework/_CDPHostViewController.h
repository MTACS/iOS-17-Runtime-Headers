
@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface> {
    <NSCopying> * _request;
    id /* block */  _viewServiceTerminationBlock;
    NSExtension * _weakExtension;
}

@property (nonatomic, retain) <NSCopying> *request;
@property (nonatomic, copy) id /* block */ viewServiceTerminationBlock;
@property (nonatomic) NSExtension *weakExtension;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (double)_keyboardHeightOffset;
- (void)dealloc;
- (void)hostKeyboardOffset:(id /* block */)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)setViewServiceTerminationBlock:(id /* block */)arg1;
- (void)setWeakExtension:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id /* block */)viewServiceTerminationBlock;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)weakExtension;

@end

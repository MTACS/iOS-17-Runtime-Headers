
@interface _SLAuthHostViewController : _UIRemoteViewController {
    id /* block */  _viewServiceTerminationBlock;
}

@property (nonatomic, copy) id /* block */ viewServiceTerminationBlock;

- (void).cxx_destruct;
- (void)setViewServiceTerminationBlock:(id /* block */)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id /* block */)viewServiceTerminationBlock;

@end

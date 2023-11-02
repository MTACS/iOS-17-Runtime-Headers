
@interface LPCollaborationFooterConfiguration : NSObject {
    id /* block */  _action;
    SLCollaborationFooterViewModel * _viewModel;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, retain) SLCollaborationFooterViewModel *viewModel;

+ (id)configurationWithViewModel:(id)arg1 action:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end

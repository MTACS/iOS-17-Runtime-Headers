
@interface CNUICancelBarButtonItem : UIBarButtonItem {
    id /* block */  _didTapHandler;
}

@property (nonatomic, readonly) id /* block */ didTapHandler;

- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (id /* block */)didTapHandler;
- (id)initWithDidTapHandler:(id /* block */)arg1;

@end

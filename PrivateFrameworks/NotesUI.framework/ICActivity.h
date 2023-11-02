
@interface ICActivity : UIActivity {
    long long  _contextPathEnum;
    id /* block */  _performActivityBlock;
    <UIPopoverPresentationControllerSourceItem> * _presentationSourceItem;
}

@property (nonatomic) long long contextPathEnum;
@property (nonatomic, copy) id /* block */ performActivityBlock;
@property (nonatomic, retain) <UIPopoverPresentationControllerSourceItem> *presentationSourceItem;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionWithCompletion:(id /* block */)arg1;
- (void)commonInit;
- (long long)contextPathEnum;
- (id)init;
- (id)initWithPerformActivity:(id /* block */)arg1;
- (id)menuWithCompletion:(id /* block */)arg1;
- (id /* block */)performActivityBlock;
- (void)performActivityWithCompletion:(id /* block */)arg1;
- (id)presentationSourceItem;
- (void)setContextPathEnum:(long long)arg1;
- (void)setPerformActivityBlock:(id /* block */)arg1;
- (void)setPresentationSourceItem:(id)arg1;

@end

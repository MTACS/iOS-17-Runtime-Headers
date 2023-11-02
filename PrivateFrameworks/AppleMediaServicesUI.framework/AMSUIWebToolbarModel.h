
@interface AMSUIWebToolbarModel : NSObject <AMSUIWebModelInterface> {
    AMSUIWebButtonModel * _leftButton;
    AMSUIWebButtonModel * _rightButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIWebButtonModel *leftButton;
@property (nonatomic, retain) AMSUIWebButtonModel *rightButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)leftButton;
- (id)rightButton;
- (void)setLeftButton:(id)arg1;
- (void)setRightButton:(id)arg1;

@end

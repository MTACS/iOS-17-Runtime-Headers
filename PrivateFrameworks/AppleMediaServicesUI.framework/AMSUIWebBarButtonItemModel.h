
@interface AMSUIWebBarButtonItemModel : NSObject <AMSUIWebModelInterface> {
    AMSUIWebAppViewModel * _appViewModel;
    AMSUIWebButtonModel * _buttonModel;
    NSArray * _conditionalButtonModels;
}

@property (nonatomic, retain) AMSUIWebAppViewModel *appViewModel;
@property (nonatomic, retain) AMSUIWebButtonModel *buttonModel;
@property (nonatomic, retain) NSArray *conditionalButtonModels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appViewModel;
- (id)buttonModel;
- (id)conditionalButtonModels;
- (id)description;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (bool)isEmpty;
- (void)setAppViewModel:(id)arg1;
- (void)setButtonModel:(id)arg1;
- (void)setConditionalButtonModels:(id)arg1;

@end

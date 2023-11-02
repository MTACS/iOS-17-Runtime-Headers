
@interface VUIActionAlert : VUIAction {
    NSMutableArray * _actionItems;
    VUIAction * _cancelAction;
    Class  _controllerClass;
    NSString * _descriptionString;
    NSDictionary * _dialogMetrics;
    NSString * _dismissButtonTitle;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *actionItems;
@property (nonatomic, retain) VUIAction *cancelAction;
@property (nonatomic, retain) Class controllerClass;
@property (nonatomic, retain) NSString *descriptionString;
@property (nonatomic, retain) NSDictionary *dialogMetrics;
@property (nonatomic, retain) NSString *dismissButtonTitle;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)actionItems;
- (id)cancelAction;
- (Class)controllerClass;
- (id)descriptionString;
- (id)dialogMetrics;
- (id)dismissButtonTitle;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2 controllerClass:(Class)arg3;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActionItems:(id)arg1;
- (void)setCancelAction:(id)arg1;
- (void)setControllerClass:(Class)arg1;
- (void)setDescriptionString:(id)arg1;
- (void)setDialogMetrics:(id)arg1;
- (void)setDismissButtonTitle:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end

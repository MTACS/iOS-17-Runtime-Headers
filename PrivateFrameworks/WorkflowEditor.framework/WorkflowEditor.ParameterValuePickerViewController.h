
@interface WorkflowEditor.ParameterValuePickerViewController : UIViewController {
    void allowsMultipleSelection;
    void allowsVariables;
    void currentState;
    void delegate;
    void hostingViewController;
    void initialValue;
    void parameter;
    void variableProvider;
    void variableUIDelegate;
}

@property (nonatomic) <_TtP14WorkflowEditor42ParameterValuePickerViewControllerDelegate_> *delegate;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithParameter:(id)arg1 allowsVariables:(bool)arg2 allowsMultipleSelection:(bool)arg3 initialCollection:(id)arg4 currentState:(id)arg5;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (id)variableProvider;
- (id)variableUIDelegate;

@end


@interface WorkflowEditor.ParameterValuePickerModel : NSObject <WFParameterEventObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _prompt;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _results;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _userInput;
    void allowedVariableTypes;
    void allowsMultipleSelection;
    void cachedValues;
    void defaultCollection;
    void onCancel;
    void onSelectMagicVariable;
    void onSelectedStateChange;
    void parameter;
    void reloadDebouncer;
    void variableProvider;
    void variableUIDelegate;
}

- (void).cxx_destruct;
- (void)_reload;
- (id)init;
- (void)parameterAttributesDidChange:(id)arg1;

@end


@interface WorkflowEditor.VariableAutocompleter : NSObject <WFVariableObserver> {
    void allowedVariableTypes;
    void anyDataSource;
    void namedVariables;
    void needsUpdateSuggestions;
    void showPlusMinus;
    void specialVariables;
    void suggester;
    void variableProvider;
}

- (void).cxx_destruct;
- (void)availableVariablesDidChange;
- (id)init;

@end

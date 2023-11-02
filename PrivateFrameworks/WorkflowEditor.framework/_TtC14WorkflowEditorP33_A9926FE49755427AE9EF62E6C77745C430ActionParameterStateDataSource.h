
@interface _TtC14WorkflowEditorP33_A9926FE49755427AE9EF62E6C77745C430ActionParameterStateDataSource : NSObject <WFActionEventObserver> {
    void action;
    void isSetting;
    void parameter;
    void undoManager;
}

@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)dealloc;
- (long long)hash;
- (id)init;

@end

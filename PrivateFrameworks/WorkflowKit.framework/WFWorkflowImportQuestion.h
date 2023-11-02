
@interface WFWorkflowImportQuestion : NSObject {
    WFAction * _action;
    <WFParameterState> * _defaultState;
    WFParameter * _parameter;
    NSString * _question;
}

@property (nonatomic, readonly) WFAction *action;
@property (nonatomic, readonly) <WFParameterState> *defaultState;
@property (nonatomic, readonly) WFParameter *parameter;
@property (nonatomic, readonly, copy) NSString *question;

- (void).cxx_destruct;
- (id)action;
- (id)defaultState;
- (id)initWithAction:(id)arg1 parameter:(id)arg2 question:(id)arg3 defaultState:(id)arg4;
- (id)initWithSerializedRepresentation:(id)arg1 workflowActions:(id)arg2;
- (id)parameter;
- (id)question;
- (id)serializedRepresentationWithWorkflowActions:(id)arg1;

@end

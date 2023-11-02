
@interface WFHarnessTestCase : NSObject {
    NSString * _automationType;
    NSSet * _conditions;
    NSMutableSet * _handledConditions;
    NSMutableSet * _handledInteractions;
    NSMutableSet * _handledSiriInteractions;
    NSString * _identifier;
    WFContentCollection * _input;
    NSSet * _interactions;
    NSString * _name;
    WFHarnessTestResultExpectation * _resultExpectation;
    WFWorkflowRunDescriptor * _runDescriptor;
    NSSet * _siriInteractions;
}

@property (nonatomic, readonly, copy) NSString *automationType;
@property (nonatomic, readonly, copy) NSSet *conditions;
@property (nonatomic, readonly) NSMutableSet *handledConditions;
@property (nonatomic, readonly) NSMutableSet *handledInteractions;
@property (nonatomic, readonly) NSMutableSet *handledSiriInteractions;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) WFContentCollection *input;
@property (nonatomic, readonly, copy) NSSet *interactions;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) WFHarnessTestResultExpectation *resultExpectation;
@property (nonatomic, readonly) WFWorkflowRunDescriptor *runDescriptor;
@property (nonatomic, readonly, copy) NSSet *siriInteractions;

- (void).cxx_destruct;
- (id)automationType;
- (id)conditions;
- (id)handledConditions;
- (id)handledInteractions;
- (id)handledSiriInteractions;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 workflowRunDescriptor:(id)arg3 input:(id)arg4 automationType:(id)arg5 interactions:(id)arg6 siriInteractions:(id)arg7 conditions:(id)arg8 resultExpectation:(id)arg9;
- (id)input;
- (id)interactions;
- (id)name;
- (id)resultExpectation;
- (id)runDescriptor;
- (id)siriInteractions;

@end


@interface SXLayoutCoordinator : NSObject <SXLayoutCoordinator, SXLayoutInvalidationManagerDelegate, SXLayoutPipelineDelegate> {
    SXDOMObjectProvider * _DOMObjectProvider;
    SXLayoutBlueprintProvider * _blueprintProvider;
    SXDelayed * _debouncer;
    <SXDocumentProviding> * _documentProvider;
    <SXLayoutInstructionFactory> * _instructionFactory;
    <SXLayoutIntegrator> * _integrator;
    <SXLayoutInvalidationManager> * _invalidationManager;
    SXLayoutOptions * _layoutOptions;
    SXLayoutParametersManager * _layoutParametersManager;
    <SXLayoutPolicyManager> * _layoutPolicyManager;
    <SXLayoutPipeline> * _pipeline;
    <SXLayoutCoordinatorDelegate> * delegate;
}

@property (nonatomic, readonly) SXDOMObjectProvider *DOMObjectProvider;
@property (nonatomic, readonly) SXLayoutBlueprintProvider *blueprintProvider;
@property (nonatomic, retain) SXDelayed *debouncer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXLayoutCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentProviding> *documentProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXLayoutInstructionFactory> *instructionFactory;
@property (nonatomic, readonly) <SXLayoutIntegrator> *integrator;
@property (nonatomic, readonly) <SXLayoutInvalidationManager> *invalidationManager;
@property (nonatomic, retain) SXLayoutOptions *layoutOptions;
@property (nonatomic, readonly) SXLayoutParametersManager *layoutParametersManager;
@property (nonatomic, readonly) <SXLayoutPolicyManager> *layoutPolicyManager;
@property (nonatomic, readonly) <SXLayoutPipeline> *pipeline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (id)blueprintProvider;
- (id)debouncer;
- (id)delegate;
- (id)documentProvider;
- (id)initWithPipeline:(id)arg1 integrator:(id)arg2 instructionFactory:(id)arg3 invalidationManager:(id)arg4 blueprintProvider:(id)arg5 DOMObjectProvider:(id)arg6 layoutParametersManager:(id)arg7 documentProvider:(id)arg8 layoutPolicyManager:(id)arg9;
- (id)instructionFactory;
- (id)integrator;
- (id)invalidationManager;
- (void)layoutInvalidationManager:(id)arg1 didInvalidateBlueprint:(id)arg2;
- (id)layoutOptions;
- (id)layoutParametersManager;
- (void)layoutPipeline:(id)arg1 finishedTask:(id)arg2 withResult:(id)arg3;
- (id)layoutPolicyManager;
- (void)layoutWithOptions:(id)arg1;
- (id)pipeline;
- (void)setDebouncer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)startTask:(id)arg1;
- (id)taskWithOptions:(id)arg1 layoutBlueprint:(id)arg2 instructions:(id)arg3;

@end


@interface WFWorkflowControllerState : NSObject <NSSecureCoding> {
    NSSet * _allowedOnceSmartPromptStates;
    WFContentItemCache * _contentItemCache;
    WFContentAttributionTracker * _currentActionContentAttributionTracker;
    unsigned long long  _currentActionIndex;
    WFContentCollection * _currentInput;
    NSDictionary * _currentProcessedParameters;
    NSString * _currentRunSource;
    NSSet * _extensionResourceClasses;
    WFControlFlowAttributionTracker * _flowTracker;
    long long  _numberOfDialogsPresented;
    unsigned long long  _outputBehavior;
    WFWorkflowRunningContext * _runningContext;
    bool  _shouldDisablePrivacyPrompts;
    NSDate * _startDate;
    NSDictionary * _variables;
    WFWorkflowReference * _workflow;
}

@property (nonatomic, readonly) NSSet *allowedOnceSmartPromptStates;
@property (nonatomic, readonly) WFContentItemCache *contentItemCache;
@property (nonatomic, readonly) WFContentAttributionTracker *currentActionContentAttributionTracker;
@property (nonatomic, readonly) unsigned long long currentActionIndex;
@property (nonatomic, readonly) WFContentCollection *currentInput;
@property (nonatomic, readonly) NSDictionary *currentProcessedParameters;
@property (nonatomic, readonly) NSString *currentRunSource;
@property (nonatomic, readonly) NSSet *extensionResourceClasses;
@property (nonatomic, readonly) WFControlFlowAttributionTracker *flowTracker;
@property (nonatomic, readonly) long long numberOfDialogsPresented;
@property (nonatomic, readonly) unsigned long long outputBehavior;
@property (nonatomic, readonly) WFWorkflowRunningContext *runningContext;
@property (nonatomic, readonly) bool shouldDisablePrivacyPrompts;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDictionary *variables;
@property (nonatomic, readonly) WFWorkflowReference *workflow;

+ (void)getStateFromURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedOnceSmartPromptStates;
- (id)contentItemCache;
- (id)currentActionContentAttributionTracker;
- (unsigned long long)currentActionIndex;
- (id)currentInput;
- (id)currentProcessedParameters;
- (id)currentRunSource;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionResourceClasses;
- (id)flowTracker;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflow:(id)arg1 variables:(id)arg2 currentActionIndex:(unsigned long long)arg3 runningContext:(id)arg4 currentInput:(id)arg5 currentProcessedParameters:(id)arg6 startDate:(id)arg7 currentRunSource:(id)arg8 numberOfDialogsPresented:(long long)arg9 outputBehavior:(unsigned long long)arg10 contentAttributionTracker:(id)arg11 contentItemCache:(id)arg12 flowTracker:(id)arg13 allowedOnceSmartPromptStates:(id)arg14 extensionResourceClasses:(id)arg15 shouldDisablePrivacyPrompts:(bool)arg16;
- (long long)numberOfDialogsPresented;
- (unsigned long long)outputBehavior;
- (id)runningContext;
- (bool)shouldDisablePrivacyPrompts;
- (id)startDate;
- (id)variables;
- (id)workflow;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end


@interface WFDialogRequest : NSObject <NSSecureCoding> {
    WFDialogAttribution * _attribution;
    bool  _isLastAction;
    NSString * _prompt;
    bool  _requiresRunningShortcut;
    WFWorkflowRunViewSource * _runViewSource;
}

@property (nonatomic, readonly) WFDialogAttribution *attribution;
@property (nonatomic, readonly) bool hasMultilineTextEntry;
@property (nonatomic) bool isLastAction;
@property (nonatomic, readonly) NSString *prompt;
@property (nonatomic, readonly) NSString *promptForDisplay;
@property (nonatomic) bool requiresRunningShortcut;
@property (nonatomic, copy) WFWorkflowRunViewSource *runViewSource;
@property (nonatomic, readonly) bool shouldCenterPrompt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attribution;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMultilineTextEntry;
- (id)initWithAppBundleIdentifier:(id)arg1 prompt:(id)arg2;
- (id)initWithAttribution:(id)arg1 prompt:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isLastAction;
- (id)prompt;
- (id)promptForDisplay;
- (id)requestByCompactingRequest;
- (bool)requiresRunningShortcut;
- (id)runViewSource;
- (void)setIsLastAction:(bool)arg1;
- (void)setRequiresRunningShortcut:(bool)arg1;
- (void)setRunViewSource:(id)arg1;
- (bool)shouldCenterPrompt;

@end

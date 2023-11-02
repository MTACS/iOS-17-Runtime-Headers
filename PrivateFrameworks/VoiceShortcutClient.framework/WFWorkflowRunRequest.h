
@interface WFWorkflowRunRequest : NSObject <NSSecureCoding> {
    bool  _allowsDialogNotifications;
    bool  _allowsHandoff;
    NSData * _archivedInput;
    NSString * _automationType;
    WFContentCollection * _cachedInput;
    bool  _donateInteraction;
    NSSet * _extensionResourceClasses;
    bool  _isAutomationSuggestion;
    NSDictionary * _listenerEndpoints;
    bool  _logRunEvent;
    unsigned long long  _outputBehavior;
    NSString * _parentBundleIdentifier;
    NSString * _parentRunningContextIdentifier;
    unsigned long long  _presentationMode;
    NSXPCListenerEndpoint * _remoteDialogPresenterEndpoint;
    NSString * _runSource;
    WFWorkflowRunViewSource * _runViewSource;
    NSString * _trialID;
}

@property (nonatomic) bool allowsDialogNotifications;
@property (nonatomic) bool allowsHandoff;
@property (nonatomic, readonly) NSData *archivedInput;
@property (nonatomic, copy) NSString *automationType;
@property (nonatomic, retain) WFContentCollection *cachedInput;
@property (nonatomic) bool donateInteraction;
@property (nonatomic, copy) NSSet *extensionResourceClasses;
@property (nonatomic) bool isAutomationSuggestion;
@property (nonatomic, copy) NSDictionary *listenerEndpoints;
@property (nonatomic) bool logRunEvent;
@property (nonatomic) unsigned long long outputBehavior;
@property (nonatomic, copy) NSString *parentBundleIdentifier;
@property (nonatomic, retain) NSString *parentRunningContextIdentifier;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, readonly) id queueIdentifier;
@property (nonatomic, retain) NSXPCListenerEndpoint *remoteDialogPresenterEndpoint;
@property (nonatomic, copy) NSString *runSource;
@property (nonatomic, copy) WFWorkflowRunViewSource *runViewSource;
@property (nonatomic, copy) NSString *trialID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsDialogNotifications;
- (bool)allowsHandoff;
- (id)archivedInput;
- (id)automationType;
- (id)cachedInput;
- (id)description;
- (bool)donateInteraction;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionResourceClasses;
- (void)getInputWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 presentationMode:(unsigned long long)arg2;
- (bool)isAutomationSuggestion;
- (id)listenerEndpoints;
- (bool)logRunEvent;
- (unsigned long long)outputBehavior;
- (id)parentBundleIdentifier;
- (id)parentRunningContextIdentifier;
- (unsigned long long)presentationMode;
- (id)queueIdentifier;
- (id)remoteDialogPresenterEndpoint;
- (id)runSource;
- (id)runViewSource;
- (void)setAllowsDialogNotifications:(bool)arg1;
- (void)setAllowsHandoff:(bool)arg1;
- (void)setAutomationType:(id)arg1;
- (void)setCachedInput:(id)arg1;
- (void)setDonateInteraction:(bool)arg1;
- (void)setExtensionResourceClasses:(id)arg1;
- (void)setIsAutomationSuggestion:(bool)arg1;
- (void)setListenerEndpoints:(id)arg1;
- (void)setLogRunEvent:(bool)arg1;
- (void)setOutputBehavior:(unsigned long long)arg1;
- (void)setParentBundleIdentifier:(id)arg1;
- (void)setParentRunningContextIdentifier:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setRemoteDialogPresenterEndpoint:(id)arg1;
- (void)setRunSource:(id)arg1;
- (void)setRunViewSource:(id)arg1;
- (void)setTrialID:(id)arg1;
- (id)trialID;
- (id)unableToDecodeInputError;

@end


@interface WFWorkflowRunningContext : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsDialogNotifications;
    NSString * _automationType;
    WFContextualAction * _contextualAction;
    WFContextualActionContext * _contextualActionContext;
    NSDate * _creationDate;
    NSString * _identifier;
    NSString * _originatingBundleIdentifier;
    unsigned long long  _outputBehavior;
    NSURL * _outputRootIfRunningInFinder;
    unsigned long long  _presentationMode;
    NSString * _progressCategory;
    NSString * _rootWorkflowIdentifier;
    NSString * _runKind;
    NSString * _runSource;
    WFWorkflowRunViewSource * _runViewSource;
    NSString * _workflowIdentifier;
}

@property (nonatomic) bool allowsDialogNotifications;
@property (nonatomic, copy) NSString *automationType;
@property (nonatomic, retain) WFContextualAction *contextualAction;
@property (nonatomic, retain) WFContextualActionContext *contextualActionContext;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isShortcutsApp;
@property (nonatomic, copy) NSString *originatingBundleIdentifier;
@property (nonatomic) unsigned long long outputBehavior;
@property (nonatomic, retain) NSURL *outputRootIfRunningInFinder;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, readonly, copy) NSString *progressCategory;
@property (nonatomic, copy) NSString *rootWorkflowIdentifier;
@property (nonatomic, copy) NSString *runKind;
@property (nonatomic, copy) NSString *runSource;
@property (nonatomic, copy) WFWorkflowRunViewSource *runViewSource;
@property (nonatomic, copy) NSString *workflowIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addProgressSubscriberUsingPublishingHandler:(id /* block */)arg1;
- (bool)allowsDialogNotifications;
- (id)automationType;
- (id)contextualAction;
- (id)contextualActionContext;
- (id)copyWithNewIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflowIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isShortcutsApp;
- (id)originatingBundleIdentifier;
- (unsigned long long)outputBehavior;
- (id)outputRootIfRunningInFinder;
- (unsigned long long)presentationMode;
- (id)progressCategory;
- (id)progressForPublishingWithTotalUnitCount:(long long)arg1 cancellationHandler:(id /* block */)arg2;
- (void)removeProgressSubscriber:(id)arg1;
- (id)rootWorkflowIdentifier;
- (id)runKind;
- (id)runSource;
- (id)runViewSource;
- (void)setAllowsDialogNotifications:(bool)arg1;
- (void)setAutomationType:(id)arg1;
- (void)setContextualAction:(id)arg1;
- (void)setContextualActionContext:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOriginatingBundleIdentifier:(id)arg1;
- (void)setOutputBehavior:(unsigned long long)arg1;
- (void)setOutputRootIfRunningInFinder:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setRootWorkflowIdentifier:(id)arg1;
- (void)setRunKind:(id)arg1;
- (void)setRunSource:(id)arg1;
- (void)setRunViewSource:(id)arg1;
- (void)setWorkflowIdentifier:(id)arg1;
- (id)workflowIdentifier;

@end

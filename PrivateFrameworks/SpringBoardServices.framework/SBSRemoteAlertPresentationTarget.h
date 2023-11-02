
@interface SBSRemoteAlertPresentationTarget : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {
    bool  _requiresFullscreenPresentation;
    bool  _shouldDismissInSwitcher;
    bool  _shouldDismissOnUILock;
    SBSRemoteAlertPresentationTargetPredicate * _targetPredicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool requiresFullscreenPresentation;
@property (nonatomic, copy) NSString *scenePersistentIdentifier;
@property (nonatomic) bool shouldDismissInSwitcher;
@property (nonatomic) bool shouldDismissOnUILock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBSRemoteAlertPresentationTargetPredicate *targetPredicate;
@property (nonatomic, readonly) BSProcessHandle *targetProcess;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetPredicate:(id)arg1;
- (id)initWithTargetProcess:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)requiresFullscreenPresentation;
- (id)scenePersistentIdentifier;
- (void)setRequiresFullscreenPresentation:(bool)arg1;
- (void)setScenePersistentIdentifier:(id)arg1;
- (void)setShouldDismissInSwitcher:(bool)arg1;
- (void)setShouldDismissOnUILock:(bool)arg1;
- (bool)shouldDismissInSwitcher;
- (bool)shouldDismissOnUILock;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)targetPredicate;
- (id)targetProcess;

@end

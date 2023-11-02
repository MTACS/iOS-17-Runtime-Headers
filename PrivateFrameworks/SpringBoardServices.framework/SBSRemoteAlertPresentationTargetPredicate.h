
@interface SBSRemoteAlertPresentationTargetPredicate : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {
    LSApplicationIdentity * _launchingApplicationIdentity;
    BSProcessHandle * _process;
    NSString * _scenePersistentIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LSApplicationIdentity *launchingApplicationIdentity;
@property (nonatomic, retain) BSProcessHandle *process;
@property (nonatomic, copy) NSString *scenePersistentIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (id)predicateForLaunchingApplicationIdentity:(id)arg1;
+ (id)predicateForProcess:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)launchingApplicationIdentity;
- (id)process;
- (id)scenePersistentIdentifier;
- (void)setLaunchingApplicationIdentity:(id)arg1;
- (void)setProcess:(id)arg1;
- (void)setScenePersistentIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)_launchingApplicationRecord;
- (void)configureTransientOverlayContext:(id)arg1;
- (bool)matchesOverlayViewController:(id)arg1;
- (id)targetApplicationWithController:(id)arg1;

@end

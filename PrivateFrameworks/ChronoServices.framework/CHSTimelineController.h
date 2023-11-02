
@interface CHSTimelineController : NSObject {
    CHSChronoServicesConnection * _connection;
    NSString * _extensionBundleIdentifier;
    NSString * _kind;
}

@property (nonatomic, readonly, copy) NSString *avocadoIdentifier;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *kind;

- (void).cxx_destruct;
- (id)avocadoIdentifier;
- (id)extensionBundleIdentifier;
- (id)initForAvocadoIdentifier:(id)arg1 inBundleIdentifier:(id)arg2;
- (id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2;
- (id)kind;
- (id)reloadTimeline;
- (id)reloadTimelineBudgeted;
- (id)reloadTimelineBudgetedWithReason:(id)arg1;
- (id)reloadTimelineWithReason:(id)arg1;

@end

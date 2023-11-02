
@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>

@property (nonatomic, readonly) NSArray *actionSets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSString *homeIdentifier;
@property (nonatomic, readonly) NSArray *shortcutsDictionaryRepresentations;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)homeAccessoryActionWithHome:(id)arg1 actionSets:(id)arg2;
+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1;

- (id)actionSets;
- (void)dealloc;
- (id)home;
- (id)homeIdentifier;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homeName;
- (void)initializeParameters;
- (id)localizedAttribution;
- (id)localizedDescriptionSummary;
- (id)localizedName;
- (void)localizedParameterSummaryWithCompletion:(id /* block */)arg1;
- (id)localizedSummaryText;
- (id)parameterSummaryString;
- (void)performHomeAccessoryAction;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)shortcutsDictionaryRepresentations;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (id)localizedFooter;

@end

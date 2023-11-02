
@interface WFSwitchParameter : WFParameter <WFModuleSummarySupporting> {
    NSString * _localizedOffDisplayName;
    NSString * _localizedOnDisplayName;
}

@property (nonatomic, readonly) NSString *localizedOffDisplayName;
@property (nonatomic, readonly) NSString *localizedOnDisplayName;
@property (nonatomic, readonly) NSString *offDisplayName;
@property (nonatomic, readonly) NSString *onDisplayName;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)defaultOffDisplayName;
+ (id)defaultOnDisplayName;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)arg1;
- (id)localizedOffDisplayName;
- (id)localizedOnDisplayName;
- (id)offDisplayName;
- (id)onDisplayName;
- (Class)singleStateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)moduleSummarySlotForState:(id)arg1;

@end

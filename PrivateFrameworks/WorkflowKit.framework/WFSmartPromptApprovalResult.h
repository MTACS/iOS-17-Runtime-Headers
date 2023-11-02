
@interface WFSmartPromptApprovalResult : NSObject <NSSecureCoding> {
    NSString * _actionUUID;
    NSArray * _allowedStates;
    NSArray * _deniedStates;
    WFContentAttributionSet * _previousAttributions;
    NSArray * _restrictedStates;
    NSArray * _undefinedStates;
}

@property (nonatomic, readonly) NSString *actionUUID;
@property (nonatomic, readonly) NSArray *allowedStates;
@property (nonatomic, readonly) NSArray *deniedStates;
@property (nonatomic, readonly) WFContentAttributionSet *previousAttributions;
@property (nonatomic, readonly) NSArray *restrictedStates;
@property (nonatomic, readonly) NSArray *undefinedStates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionUUID;
- (id)allowedStates;
- (id)deniedStates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionUUID:(id)arg1;
- (id)initWithAllowedStates:(id)arg1 deniedStates:(id)arg2 undefinedStates:(id)arg3 restrictedStates:(id)arg4 actionUUID:(id)arg5 previousAttributions:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)previousAttributions;
- (id)restrictedStates;
- (id)resultByAddingDatabaseResult:(id)arg1;
- (id)undefinedStates;

@end

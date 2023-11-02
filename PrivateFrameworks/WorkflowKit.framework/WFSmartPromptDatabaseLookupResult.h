
@interface WFSmartPromptDatabaseLookupResult : NSObject {
    NSArray * _allowedStates;
    NSArray * _deniedStates;
    WFContentAttribution * _previousAttribution;
    NSArray * _restrictedStates;
    NSArray * _undefinedStates;
}

@property (nonatomic, readonly) NSArray *allowedStates;
@property (nonatomic, readonly) NSArray *deniedStates;
@property (nonatomic, readonly) WFContentAttribution *previousAttribution;
@property (nonatomic, readonly) NSArray *restrictedStates;
@property (nonatomic, readonly) NSArray *undefinedStates;

- (void).cxx_destruct;
- (id)allowedStates;
- (id)deniedStates;
- (id)initWithAllowedStates:(id)arg1 deniedStates:(id)arg2 undefinedStates:(id)arg3;
- (id)initWithAllowedStates:(id)arg1 deniedStates:(id)arg2 undefinedStates:(id)arg3 previousAttribution:(id)arg4;
- (id)initWithAllowedStates:(id)arg1 deniedStates:(id)arg2 undefinedStates:(id)arg3 restrictedStates:(id)arg4;
- (id)initWithAllowedStates:(id)arg1 deniedStates:(id)arg2 undefinedStates:(id)arg3 restrictedStates:(id)arg4 previousAttribution:(id)arg5;
- (id)previousAttribution;
- (id)restrictedStates;
- (id)undefinedStates;

@end

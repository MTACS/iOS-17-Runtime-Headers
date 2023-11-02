
@interface WFSetCellularDataAction : WFHandleCustomIntentAction

@property (nonatomic, readonly) NSArray *disabledOnPlatforms;

- (id)disabledOnPlatforms;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 schema:(id)arg4 intent:(id)arg5 resolvedIntentDescriptor:(id)arg6 stringLocalizer:(id)arg7;

@end

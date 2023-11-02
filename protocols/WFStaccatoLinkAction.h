
@protocol WFStaccatoLinkAction

@optional

- (NSDictionary *)defaultParameterStatesForStaccato;
- (NSSet *)hiddenParameterKeysForStaccato;
- (NSString *)staccatoNameOverride;

@end

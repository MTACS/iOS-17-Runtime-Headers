
@protocol WFActionSupportsContextualMediaPlayback

@required

- (bool)attemptContextualPlayback;
- (void)executePlayMediaIntent:(INPlayMediaIntent *)arg1;
- (WFIntentExecutor *)executor;
- (NSDictionary *)serializedParametersForContextualActionMediaIntent:(INPlayMediaIntent *)arg1;
- (void)setExecutor:(WFIntentExecutor *)arg1;

@end

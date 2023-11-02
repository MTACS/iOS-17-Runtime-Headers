
@protocol _INPBPayloadNeedsExecuteIntent <NSObject>

@required

- (bool)hasIntentExecution;
- (_INPBIntentExecutionRequest *)intentExecution;
- (void)setIntentExecution:(_INPBIntentExecutionRequest *)arg1;

@end

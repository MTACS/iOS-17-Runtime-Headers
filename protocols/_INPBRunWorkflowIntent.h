
@protocol _INPBRunWorkflowIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasWorkflow;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setWorkflow:(_INPBDataString *)arg1;
- (_INPBDataString *)workflow;

@end

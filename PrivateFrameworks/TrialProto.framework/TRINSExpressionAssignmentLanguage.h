
@interface TRINSExpressionAssignmentLanguage : TRIPBMessage

@property (nonatomic, copy) NSString *assignmentExpression;
@property (nonatomic) bool hasAssignmentExpression;
@property (nonatomic) bool hasSchemaVersion;
@property (nonatomic) unsigned int schemaVersion;

+ (id)descriptor;

@end

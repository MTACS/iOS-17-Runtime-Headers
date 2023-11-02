
@protocol _INPBCondition <NSObject>

@required

- (int)StringAsConditionalOperator:(NSString *)arg1;
- (int)conditionalOperator;
- (NSString *)conditionalOperatorAsString:(int)arg1;
- (bool)hasConditionalOperator;
- (void)setConditionalOperator:(int)arg1;
- (void)setHasConditionalOperator:(bool)arg1;

@end

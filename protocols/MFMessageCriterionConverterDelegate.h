
@protocol MFMessageCriterionConverterDelegate <NSObject>

@optional

- (MailAccount *)mailAccountForIdentifier:(NSString *)arg1;
- (long long)messageCriterionConverter:(MFMessageCriterionConverter *)arg1 criterionTypeForKey:(NSString *)arg2;
- (NSString *)messageCriterionConverter:(MFMessageCriterionConverter *)arg1 expressionForConstantValue:(id)arg2 withCriterionType:(long long)arg3;
- (NSArray *)messageCriterionConverter:(MFMessageCriterionConverter *)arg1 predicateKeysForCriterionType:(long long)arg2;
- (unsigned long long)messageCriterionConverter:(MFMessageCriterionConverter *)arg1 willUsePredicateOperatorType:(unsigned long long)arg2 forKey:(NSString *)arg3;

@end

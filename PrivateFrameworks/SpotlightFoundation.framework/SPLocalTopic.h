
@interface SPLocalTopic : SFLocalTopic

+ (id)localTopicWithContactName:(id)arg1 contactIdentifier:(id)arg2;
+ (id)localTopicWithContactName:(id)arg1 contactIdentifier:(id)arg2 detailText:(id)arg3;
+ (id)localTopicWithContactName:(id)arg1 emails:(id)arg2 phones:(id)arg3 detailText:(id)arg4;
+ (id)localTopicWithDictionaryResult:(id)arg1;
+ (id)localTopicWithTitle:(id)arg1;
+ (id)localTopicWithTitle:(id)arg1 type:(int)arg2 score:(id)arg3;
+ (id)localTopicWithTitle:(id)arg1 type:(int)arg2 score:(id)arg3 isCached:(bool)arg4;
+ (id)localTopicWithTopicIdentifier:(id)arg1;
+ (id)proactiveTopicWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 detailText:(id)arg4;

- (id)initWithContactName:(id)arg1 contactIdentifier:(id)arg2 detailText:(id)arg3;
- (id)initWithContactName:(id)arg1 emails:(id)arg2 phones:(id)arg3 detailText:(id)arg4;
- (id)initWithDictionaryResult:(id)arg1;
- (id)initWithTitle:(id)arg1 type:(int)arg2 score:(id)arg3 isCached:(bool)arg4;
- (id)initWithTopicIdentifier:(id)arg1;

@end


@interface SGContactEntity : SGEntity

+ (id)contactEntityFromEntity:(id)arg1;
+ (id)contactEntityWithTitle:(id)arg1 duplicateKey:(id)arg2 recordId:(id)arg3 masterEntityId:(long long)arg4;

- (id)initWithDuplicateKey:(id)arg1 recordId:(id)arg2 masterEntityId:(long long)arg3 title:(id)arg4;

@end

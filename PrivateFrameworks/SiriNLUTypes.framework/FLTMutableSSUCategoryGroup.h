
@interface FLTMutableSSUCategoryGroup : FLTSSUCategoryGroup

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *negative_examples;
@property (nonatomic, copy) NSArray *positive_intents;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)name;
- (id)negative_examples;
- (id)positive_intents;
- (void)setName:(id)arg1;
- (void)setNegative_examples:(id)arg1;
- (void)setPositive_intents:(id)arg1;

@end

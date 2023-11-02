
@interface BMManagedObjectConverter : NSObject

- (id)convertItemMOs:(id)arg1 error:(id*)arg2;
- (id)convertRuleMOs:(id)arg1 basketCount:(unsigned long long)arg2 error:(id*)arg3;
- (id)insertItems:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)insertRules:(id)arg1 inManagedObjectContext:(id)arg2;

@end


@interface SAClassRegistry : NSObject

+ (Class)classForAceClassName:(id)arg1 inGroupWithIdentifier:(id)arg2;
+ (void)initialize;
+ (void)registerAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2;
+ (void)registerClass:(Class)arg1 forAceClassName:(id)arg2 inGroupWithIdentifier:(id)arg3;
+ (id)sharedClassRegistry;

- (Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3;

@end

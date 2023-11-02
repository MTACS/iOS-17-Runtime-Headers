
@interface CalLazyCreateUtils : NSObject

+ (void)addArray:(id)arg1 toArray:(id*)arg2;
+ (void)addArray:(id)arg1 withKey:(id)arg2 toDictionaryOfArrays:(id*)arg3;
+ (void)addArray:(id)arg1 withKey:(id)arg2 toDictionaryOfSets:(id*)arg3;
+ (void)addArray:(id)arg1 withKey:(id)arg2 toStrongTableOfArrays:(id*)arg3;
+ (void)addItem:(id)arg1 withKey:(id)arg2 toDictionaryOfArrays:(id*)arg3;
+ (void)addItem:(id)arg1 withKey:(id)arg2 toDictionaryOfSets:(id*)arg3;
+ (void)addItem:(id)arg1 withKey:(id)arg2 toStrongTableOfArrays:(id*)arg3;
+ (void)addObject:(id)arg1 toArray:(id*)arg2;
+ (void)addObject:(id)arg1 toSet:(id*)arg2;
+ (void)addSet:(id)arg1 toSet:(id*)arg2;
+ (void)addSet:(id)arg1 withKey:(id)arg2 toDictionaryOfSets:(id*)arg3;
+ (void)setValue:(id)arg1 withKey:(id)arg2 inDictionary:(id*)arg3;

@end
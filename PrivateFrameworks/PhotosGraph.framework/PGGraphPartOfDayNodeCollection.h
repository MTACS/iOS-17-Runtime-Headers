
@interface PGGraphPartOfDayNodeCollection : PGGraphNodeCollection

@property (nonatomic, readonly) NSArray *partsOfDay;

+ (Class)nodeClass;
+ (id)partOfDayNodeForPartOfDay:(unsigned long long)arg1 inGraph:(id)arg2;

- (void)enumerateNamesUsingBlock:(id /* block */)arg1;
- (id)partsOfDay;

@end

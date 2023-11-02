
@interface PGGraphPartOfDayNode : PGGraphOptimizedNode {
    unsigned long long  _partOfDay;
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long partOfDay;

+ (id)filter;
+ (id)filterWithPartOfDay:(unsigned long long)arg1;
+ (unsigned long long)partOfDayForPartOfDayName:(id)arg1;
+ (id)partOfDayNameForPartOfDay:(unsigned long long)arg1;
+ (id)stringValueForPartOfDay:(unsigned long long)arg1;

- (id)description;
- (unsigned short)domain;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithPartOfDay:(unsigned long long)arg1;
- (id)label;
- (id)name;
- (unsigned long long)partOfDay;
- (id)propertyDictionary;

@end


@protocol _INPBHomeContent <NSObject>

@required

+ (Class)actionsType;

- (NSArray *)actions;
- (_INPBHomeAttribute *)actionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionsCount;
- (void)addActions:(_INPBHomeAttribute *)arg1;
- (void)clearActions;
- (_INPBHomeFilter *)filter;
- (bool)hasFilter;
- (void)setActions:(NSArray *)arg1;
- (void)setFilter:(_INPBHomeFilter *)arg1;

@end

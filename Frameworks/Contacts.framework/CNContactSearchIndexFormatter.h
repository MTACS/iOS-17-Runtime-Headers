
@interface CNContactSearchIndexFormatter : NSFormatter

- (id)auxiliaryIndexStringForContact:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)nameExpansionsForContact:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromContact:(id)arg1;

@end

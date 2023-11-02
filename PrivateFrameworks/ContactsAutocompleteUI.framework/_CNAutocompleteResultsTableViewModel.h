
@interface _CNAutocompleteResultsTableViewModel : NSObject {
    unsigned long long  _numberOfSections;
    NSMutableDictionary * _sections;
}

@property (nonatomic, readonly) unsigned long long numberOfNonEmptySections;
@property (nonatomic) unsigned long long numberOfSections;

- (void).cxx_destruct;
- (id)computeDiffForModel:(id)arg1;
- (void)enumerateSections:(id /* block */)arg1;
- (id)initWithNumberOfSections:(unsigned long long)arg1;
- (unsigned long long)numberOfNonEmptySections;
- (unsigned long long)numberOfSections;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)setNumberOfSections:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setSection:(id)arg1 atIndex:(unsigned long long)arg2;

@end

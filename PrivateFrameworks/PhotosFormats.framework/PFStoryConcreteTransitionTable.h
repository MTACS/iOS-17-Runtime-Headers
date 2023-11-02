
@interface PFStoryConcreteTransitionTable : NSObject <PFStoryTransitionTable> {
    NSArray * _defaultFrequencies;
    NSDictionary * _transitionsByColorGrade;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithTransitionsByColorGrade:(id)arg1 defaultFrequencies:(id)arg2;
- (id)transitionsForColorGrade:(id)arg1 songPace:(long long)arg2;

@end

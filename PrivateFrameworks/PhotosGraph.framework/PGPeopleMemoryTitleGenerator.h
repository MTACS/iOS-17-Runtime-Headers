
@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator {
    NSSet * _personNodes;
    NSString * _seasonName;
    PGTimeTitleOptions * _timeTitleOptions;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSSet *personNodes;
@property (nonatomic, readonly) PGTimeTitleOptions *timeTitleOptions;
@property (nonatomic, readonly) unsigned long long type;

+ (id)peopleOverTimeTimeTitleOptionsWithMomentNodes:(id)arg1;

- (void).cxx_destruct;
- (id)_birthdayTitleForPeople;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (bool)_person:(id)arg1 isPresentInAnyMomentOfMomentNodes:(id)arg2;
- (id)_timeTitleForEarlyMoments;
- (id)_timeTitleForPeople;
- (id)_titleForChildAndPerson;
- (id)_titleForEarlyMoments;
- (id)_titleForPeople;
- (id)_titleForSocialGroup;
- (bool)_useSplitTimeTitlesIfNeeded;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 seasonName:(id)arg3 type:(unsigned long long)arg4 titleGenerationContext:(id)arg5;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 timeTitleOptions:(id)arg3 type:(unsigned long long)arg4 titleGenerationContext:(id)arg5;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 type:(unsigned long long)arg3 titleGenerationContext:(id)arg4;
- (id)personNodes;
- (id)timeTitleOptions;
- (unsigned long long)type;

@end

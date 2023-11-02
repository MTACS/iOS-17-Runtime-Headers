
@interface REUITrainingContext : RETrainingContext {
    NSMutableDictionary * _becameVisibleDates;
    bool  _resetsWhenResignsCurrent;
    NSMutableDictionary * _visibilityDurations;
}

@property (nonatomic, readonly) double maximumNegativeDwellTime;
@property (nonatomic, readonly) double minimumPositiveDwellTime;
@property (nonatomic, readonly) unsigned long long onScreenElementCount;
@property (nonatomic) bool resetsWhenResignsCurrent;
@property (nonatomic, readonly) NSArray *visibleElementIdentifiers;

- (void).cxx_destruct;
- (id)_higherElementsThanElement:(id)arg1;
- (id)_interactionForElement:(id)arg1;
- (id)_lowerElementsThanElement:(id)arg1;
- (void)_trainDwellForElement:(id)arg1 withInterval:(double)arg2;
- (id)_visibleElements;
- (void)_willResignCurrent;
- (bool)elementIsAvailable:(id)arg1;
- (void)elementWithIdentifierDidDisplay:(id)arg1;
- (void)elementWithIdentifierDidEndDisplay:(id)arg1;
- (id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2;
- (id)init;
- (id)interactionTypeForElement:(id)arg1;
- (bool)isDisplayingElementWithIdentifier:(id)arg1;
- (double)maximumNegativeDwellTime;
- (double)minimumPositiveDwellTime;
- (unsigned long long)onScreenElementCount;
- (bool)performSimulationCommand:(id)arg1 withOptions:(id)arg2;
- (void)resetContext;
- (bool)resetsWhenResignsCurrent;
- (void)selectElementWithIdentifier:(id)arg1;
- (void)setResetsWhenResignsCurrent:(bool)arg1;
- (id)visibleElementIdentifiers;

@end

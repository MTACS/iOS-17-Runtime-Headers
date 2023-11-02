
@interface HVBudget : NSObject {
    unsigned int  _alwaysAllowSourcesOverride;
    unsigned int  _alwaysDenySourcesOverride;
    unsigned int  _budgetedSources;
    unsigned int  _delayedBudgetedSources;
    unsigned int  _extraBudgetSources;
    bool  _ignoreDiscretionaryPowerBudget;
    unsigned int  _noServiceSources;
    unsigned int  _periodicBackgroundSources;
    unsigned int  _realtimeSources;
}

- (id)init;

@end


@interface SBSAContainerDynamicsInflateAnimationProvider : SBSABasePreferencesProvider {
    NSMutableSet * _elementIdentitiesThatFinishedWaitingToExpandBeforeInflation;
    NSMutableSet * _elementIdentitiesWaitingToExpandBeforeInflation;
    NSSet * _elementIdentitiesWithInflateApplied;
    NSMapTable * _pendingMilestonePropertyIdentitiesToElementIdentities;
}

- (void).cxx_destruct;
- (void)_addMilestonesIfNecessaryForUntrackedBoundsExpansionsForElementIdentities:(id)arg1 preferencesMutator:(id)arg2 context:(id)arg3;
- (id)_identitiesWithMilestoneReached:(id)arg1;
- (id)preferencesFromContext:(id)arg1;

@end

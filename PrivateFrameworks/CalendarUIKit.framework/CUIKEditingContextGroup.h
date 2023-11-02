
@interface CUIKEditingContextGroup : NSObject <CUIKEditingContextObserver> {
    NSMutableArray * _additionalObjectGroups;
    NSNumber * _earlyCommitDecisionAsNumber;
    EKEventStore * _eventStore;
    CUIKObjectGroup * _objectGroup;
    NSSet * _openContexts;
    NSNumber * _spanDecisionAsNumber;
}

@property (retain) NSMutableArray *additionalObjectGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *earlyCommitDecisionAsNumber;
@property EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (retain) CUIKObjectGroup *objectGroup;
@property (retain) NSSet *openContexts;
@property (retain) NSNumber *spanDecisionAsNumber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeEditingContexts;
- (id)activeEditingContextsExcludingContext:(id)arg1;
- (void)addAdditionalObjects:(id)arg1;
- (void)addContext:(id)arg1;
- (id)additionalObjectGroups;
- (id)earlyCommitDecisionAsNumber;
- (unsigned long long)earlyCommitDecisionForGroup;
- (bool)earlyCommitDecisionForGroupIsSet;
- (id)eventStore;
- (id)initWithObjectGroup:(id)arg1;
- (bool)isTestObserver;
- (id)newIdentifierForIdentifier:(id)arg1;
- (id)objectGroup;
- (id)objectsToCommit;
- (id)oldObject:(id)arg1 didUpdateTo:(id)arg2;
- (id)openContexts;
- (id)originalObjects;
- (void)removeContext:(id)arg1;
- (void)setAdditionalObjectGroups:(id)arg1;
- (void)setEarlyCommitDecisionAsNumber:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setObjectGroup:(id)arg1;
- (void)setOpenContexts:(id)arg1;
- (void)setSpanDecisionAsNumber:(id)arg1;
- (id)spanDecisionAsNumber;
- (unsigned long long)spanDecisionForGroup;
- (bool)spanDecisionForGroupIsSet;
- (void)specifyEarlyCommitDecisionForGroup:(unsigned long long)arg1;
- (void)specifySpanDecisionForGroup:(unsigned long long)arg1;
- (id)trackedObjects;
- (void)unspecifyEarlyCommitDecisionForGroup;
- (void)unspecifySpanDecisionForGroup;

@end

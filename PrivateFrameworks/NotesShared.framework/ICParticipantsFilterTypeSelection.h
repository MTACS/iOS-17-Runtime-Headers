
@interface ICParticipantsFilterTypeSelection : ICFilterTypeSelection {
    unsigned long long  _joinOperator;
    NSManagedObjectContext * _managedObjectContext;
    NSSet * _participantUserIDs;
    unsigned long long  _selectionType;
}

@property (nonatomic) unsigned long long joinOperator;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSSet *participantUserIDs;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic) unsigned long long selectionType;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) NSString *summaryWithJoinOperatorMenu;
@property (nonatomic, readonly) NSArray *unresolvedParticipants;

+ (id)keyPathsForValuesAffectingIsEmpty;

- (void).cxx_destruct;
- (void)addParticipantUserID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithManagedObjectContext:(id)arg1 accountObjectID:(id)arg2;
- (id)initWithManagedObjectContext:(id)arg1 accountObjectID:(id)arg2 selectionType:(unsigned long long)arg3;
- (id)initWithManagedObjectContext:(id)arg1 accountObjectID:(id)arg2 selectionType:(unsigned long long)arg3 joinOperator:(unsigned long long)arg4;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToICParticipantsFilterTypeSelection:(id)arg1;
- (bool)isValid;
- (unsigned long long)joinOperator;
- (id)managedObjectContext;
- (id)participantUserIDs;
- (id)participants;
- (id)rawFilterValue;
- (void)removeParticipantUserID:(id)arg1;
- (unsigned long long)selectionType;
- (void)setJoinOperator:(unsigned long long)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setParticipantUserIDs:(id)arg1;
- (void)setSelectionType:(unsigned long long)arg1;
- (id)summary;
- (id)summaryWithJoinOperatorMenu;
- (id)unresolvedParticipants;

@end

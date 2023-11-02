
@interface CalChangeHistoryCollector : NSObject <CNChangeHistoryEventVisitor> {
    NSMutableArray * _deletedContactIdentifiers;
    bool  _didReset;
    bool  _hasChanges;
    NSMutableArray * _insertedContacts;
    NSMutableArray * _updatedContacts;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) NSMutableArray *deletedContactIdentifiers;
@property (readonly, copy) NSString *description;
@property bool didReset;
@property bool hasChanges;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableArray *insertedContacts;
@property (readonly) Class superclass;
@property (retain) NSMutableArray *updatedContacts;

- (void).cxx_destruct;
- (id)deletedContactIdentifiers;
- (bool)didReset;
- (bool)hasChanges;
- (id)init;
- (id)insertedContacts;
- (void)setDeletedContactIdentifiers:(id)arg1;
- (void)setDidReset:(bool)arg1;
- (void)setHasChanges:(bool)arg1;
- (void)setInsertedContacts:(id)arg1;
- (void)setUpdatedContacts:(id)arg1;
- (id)updatedContacts;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end

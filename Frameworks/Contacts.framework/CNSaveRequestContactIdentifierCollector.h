
@interface CNSaveRequestContactIdentifierCollector : NSObject <CNChangeHistoryEventVisitorPrivate> {
    NSMutableArray * _allIdentifiers;
    NSMutableArray * _insertedIdentifiers;
    CNSaveRequest * _request;
}

@property (readonly) NSArray *allContactIdentifiers;
@property (readonly) NSMutableArray *allIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *insertedContactIdentifiers;
@property (readonly) NSMutableArray *insertedIdentifiers;
@property (readonly) CNSaveRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allContactIdentifiers;
- (id)allIdentifiers;
- (void)collectIdentifiers;
- (id)initWithSaveRequest:(id)arg1;
- (id)insertedContactIdentifiers;
- (id)insertedIdentifiers;
- (id)request;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDifferentMeCardEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitLinkContactsEvent:(id)arg1;
- (void)visitPreferredContactForImageEvent:(id)arg1;
- (void)visitPreferredContactForNameEvent:(id)arg1;
- (void)visitUnlinkContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end


@interface DNDSContactMonitorChangeCollector : NSObject <CNChangeHistoryEventVisitor> {
    NSMutableArray * _deletedContactIdentifiers;
    NSSet * _monitoredContactIdentifiers;
    NSMutableArray * _updatedContacts;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSArray *deletedContactIdentifiers;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *updatedContacts;

- (void).cxx_destruct;
- (id)deletedContactIdentifiers;
- (id)initWithMonitoredContactIdentifiers:(id)arg1;
- (id)updatedContacts;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end

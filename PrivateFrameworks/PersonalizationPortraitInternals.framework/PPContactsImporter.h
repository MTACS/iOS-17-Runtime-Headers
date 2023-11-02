
@interface PPContactsImporter : NSObject <CNChangeHistoryEventVisitor> {
    PPLocalContactStore * _contactStore;
    PPSQLDatabase * _db;
    PPLocalNamedEntityStore * _namedEntityStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultInstance;

- (void).cxx_destruct;
- (void)importContactsDataWithShouldContinueBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end

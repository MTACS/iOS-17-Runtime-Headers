
@interface BMRegistrar : BMSQLStore {
    <BMAccessAssertion> * _accessAssertion;
}

@property (nonatomic, readonly) NSDictionary *registeredClientsByStream;
@property (nonatomic, readonly) NSDictionary *streamRegistrationCounts;

+ (id)centralRegistrar;
+ (id)managedStreamIdentifiers;
+ (id)migrations;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRegistrarURL:(id)arg1;
- (bool)propagateDeletionOfEvents:(id)arg1;
- (bool)propagateDeletionOfEventsInStream:(id)arg1 withIdentifiers:(id)arg2;
- (bool)registerClientWithBundleID:(id)arg1 databaseURL:(id)arg2 source:(id)arg3;
- (void)registerSiriRemembersClients;
- (id)registeredClientsByStream;
- (id)registrationsForStream:(id)arg1;
- (id)streamRegistrationCounts;

@end

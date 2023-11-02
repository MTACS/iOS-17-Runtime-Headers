
@interface PDSRegistrar : NSObject {
    NSString * _clientID;
    <PDSRemoteVendor> * _remoteVendor;
}

@property (nonatomic, retain) NSString *clientID;
@property (nonatomic, retain) <PDSRemoteVendor> *remoteVendor;

- (void).cxx_destruct;
- (id)_activeRegistrationsFromEntries:(id)arg1;
- (id)_registrationsFromEntries:(id)arg1;
- (id)_wrappedErrorForFailedRemote:(id)arg1;
- (id)_wrappedErrorForGivenError:(id)arg1 XPCError:(id)arg2;
- (void)activeUsersWithCompletion:(id /* block */)arg1;
- (id)activeUsersWithError:(id*)arg1;
- (bool)addRegistration:(id)arg1 toUser:(id)arg2 error:(id*)arg3;
- (void)allEntriesWithCompletion:(id /* block */)arg1;
- (id)allEntriesWithError:(id*)arg1;
- (void)allRegistrationsForUser:(id)arg1 completion:(id /* block */)arg2;
- (id)allRegistrationsForUser:(id)arg1 error:(id*)arg2;
- (void)allRegistrationsWithCompletion:(id /* block */)arg1;
- (id)allRegistrationsWithError:(id*)arg1;
- (bool)batchUpdateRegistrations:(id)arg1 forUser:(id)arg2 error:(id*)arg3;
- (id)clientID;
- (void)currentRegistrationsForUser:(id)arg1 completion:(id /* block */)arg2;
- (id)currentRegistrationsForUser:(id)arg1 error:(id*)arg2;
- (bool)deleteRegistration:(id)arg1 fromUser:(id)arg2 error:(id*)arg3;
- (id)description;
- (bool)ensureRegistrationPresent:(id)arg1 forUser:(id)arg2 error:(id*)arg3;
- (id)initWithClientID:(id)arg1 error:(id*)arg2;
- (id)remoteVendor;
- (bool)removeAllRegistrationsFromUser:(id)arg1 error:(id*)arg2;
- (bool)removeRegistration:(id)arg1 fromUser:(id)arg2 error:(id*)arg3;
- (void)setClientID:(id)arg1;
- (void)setRemoteVendor:(id)arg1;
- (void)usersWithCompletion:(id /* block */)arg1;
- (id)usersWithError:(id*)arg1;

@end

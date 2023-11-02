
@interface SecEscrowRequest : NSObject <SecEscrowRequestable> {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)request:(id*)arg1;

- (void).cxx_destruct;
- (bool)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 error:(id*)arg3;
- (id)connection;
- (void)dealloc;
- (bool)escrowCompletedWithinLastSeconds:(double)arg1;
- (id)fetchPrerecord:(id)arg1 error:(id*)arg2;
- (id)fetchRequestWaitingOnPasscode:(id*)arg1;
- (id)fetchStatuses:(id*)arg1;
- (id)initWithConnection:(id)arg1;
- (bool)pendingEscrowUpload:(id*)arg1;
- (bool)resetAllRequests:(id*)arg1;
- (void)setConnection:(id)arg1;
- (unsigned long long)storePrerecordsInEscrow:(id*)arg1;
- (bool)triggerEscrowUpdate:(id)arg1 error:(id*)arg2;
- (bool)triggerEscrowUpdate:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end


@interface DTAssertionPidInfo : NSObject {
    NSArray * _blocks;
    NSMutableSet * _clientsWithClaim;
    int  _pid;
}

@property (readonly) NSArray *blocks;
@property (readonly) int pid;

- (void).cxx_destruct;
- (void)addClaimForClient:(id)arg1;
- (id)blocks;
- (bool)hasNoMoreClients;
- (id)initForPid:(int)arg1 withRemoveBlocks:(id)arg2 onBehalfOfClient:(id)arg3;
- (int)pid;
- (void)removeAssertions;
- (bool)removeClaimFromClient:(id)arg1;

@end

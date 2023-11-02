
@interface WBSSearchHelperConnectionManager : NSObject {
    NSMutableSet * _clients;
    NSXPCConnection * _searchHelperConnection;
}

@property (nonatomic, retain) NSXPCConnection *searchHelperConnection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)removeClient:(id)arg1;
- (id)searchHelperConnection;
- (id)searchHelperConnectionRequestedByClient:(id)arg1;
- (void)setSearchHelperConnection:(id)arg1;

@end


@interface GEORecentLocations : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)requestRecentLocationsWithResponse:(id /* block */)arg1;

@end

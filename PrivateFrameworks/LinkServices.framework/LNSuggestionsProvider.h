
@interface LNSuggestionsProvider : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)suggestedActionsForSuggestionsRequests:(id)arg1 error:(id*)arg2;

@end

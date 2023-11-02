
@interface _EXActiveClientQuery : NSObject <EXQueryResultsProtocol, NSXPCListenerDelegate> {
    NSXPCConnection * _connection;
    NSSet * _observers;
    _EXQuery * _query;
    bool  _started;
    NSXPCListener * _xpcListener;
}

@property (getter=isActive, readonly) bool active;
@property NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (retain) NSSet *observers;
@property (readonly) _EXQuery *query;
@property bool started;
@property (readonly) Class superclass;
@property (readonly) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (void)addQueryObserver:(id)arg1;
- (void)availabilityDidChange:(id)arg1 reply:(id /* block */)arg2;
- (id)connection;
- (id)endpoint;
- (unsigned long long)hash;
- (id)initWithQuery:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActiveQuery:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)observers;
- (id)query;
- (void)query:(id)arg1 resultsDidUpdate:(id)arg2 reply:(id /* block */)arg3;
- (void)removeQueryObserver:(id)arg1;
- (void)reset;
- (void)setConnection:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setStarted:(bool)arg1;
- (bool)started;
- (id)xpcListener;

@end

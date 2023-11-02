
@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection * _connection;
    void * _television;
}

@property (nonatomic, readonly) void*television;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)initWithTelevision:(void*)arg1;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void*)television;

@end

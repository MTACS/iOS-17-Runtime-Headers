
@interface GEOResourceManifestUpdateAssertion : NSObject {
    GEOXPCConnection * _connection;
    double  _creationTimestamp;
    int  _notifyToken;
    NSString * _reason;
}

- (void).cxx_destruct;
- (void)_connectToGeod;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)initWithReason:(id)arg1;

@end


@interface ChronoCore._LocationAuthorizationMonitorImpl : NSObject <CLLocationManagerDelegate> {
    void _assertionCount;
    void _didChangeHandler;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  containerIdentifier;
    void lock;
    void manager;
    void status;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end

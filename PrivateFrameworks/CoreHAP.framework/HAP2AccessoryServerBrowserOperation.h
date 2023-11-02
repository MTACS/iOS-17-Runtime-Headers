
@interface HAP2AccessoryServerBrowserOperation : HAP2LoggingObject {
    NSError * _error;
    NSMutableSet * _pendingCoordinators;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSMutableSet *pendingCoordinators;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)error;
- (id)initWithType:(unsigned long long)arg1;
- (id)pendingCoordinators;
- (void)setError:(id)arg1;
- (void)setPendingCoordinators:(id)arg1;
- (unsigned long long)type;

@end

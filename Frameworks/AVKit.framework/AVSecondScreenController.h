
@interface AVSecondScreenController : NSObject {
    bool  _allowsUpdatingActiveConnection;
    NSMutableOrderedSet * _connections;
    AVObservationController * _observationController;
    NSMutableOrderedSet * _secondScreens;
}

@property (nonatomic) bool allowsUpdatingActiveConnection;
@property (nonatomic, readonly) NSMutableOrderedSet *connections;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (nonatomic, readonly) NSMutableOrderedSet *secondScreens;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_connectionForPlayer:(id)arg1;
- (void)_insertConnection:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_targetScreen;
- (void)_updateActiveConnection;
- (id)activeConnection;
- (void)addConnection:(id)arg1;
- (id)addConnectionForPlayer:(id)arg1 playerLayer:(id)arg2;
- (void)addSecondScreen:(id)arg1;
- (bool)allowsUpdatingActiveConnection;
- (id)connectionPassingTest:(id /* block */)arg1;
- (id)connections;
- (void)dealloc;
- (id)init;
- (id)observationController;
- (id)preferredConnection;
- (void)removeConnection:(id)arg1;
- (void)removeSecondScreen:(id)arg1;
- (id)secondScreens;
- (void)setAllowsUpdatingActiveConnection:(bool)arg1;
- (void)setPreferredConnection:(id)arg1;

@end


@interface SBFRemoteBasebandLoggingManager : NSObject {
    CellularLogging * _cellularLogging;
    NSHashTable * _observers;
}

@property (nonatomic, retain) CellularLogging *cellularLogging;
@property (nonatomic, retain) NSHashTable *observers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)addObserver:(id)arg1;
- (id)cellularLogging;
- (id)init;
- (bool)isLogCollectionEnabled;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setCellularLogging:(id)arg1;
- (void)setObservers:(id)arg1;

@end

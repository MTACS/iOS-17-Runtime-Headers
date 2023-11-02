
@interface _NACListeningModesRecord : NSObject {
    NSOrderedSet * _availableListeningModes;
    NSString * _currentListeningMode;
    NSMutableSet * _observers;
}

@property (nonatomic, retain) NSOrderedSet *availableListeningModes;
@property (nonatomic, retain) NSString *currentListeningMode;
@property (nonatomic, retain) NSMutableSet *observers;

- (void).cxx_destruct;
- (id)availableListeningModes;
- (id)currentListeningMode;
- (id)observers;
- (void)setAvailableListeningModes:(id)arg1;
- (void)setCurrentListeningMode:(id)arg1;
- (void)setObservers:(id)arg1;

@end

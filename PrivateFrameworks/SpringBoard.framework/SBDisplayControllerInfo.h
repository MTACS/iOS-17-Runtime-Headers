
@interface SBDisplayControllerInfo : NSObject {
    unsigned long long  _deactivationReasons;
    <SBDisplayControlling> * _displayController;
    unsigned long long  _priorityLevel;
    long long  _windowingMode;
}

@property (nonatomic, readonly) unsigned long long deactivationReasons;
@property (nonatomic, readonly) <SBDisplayControlling> *displayController;
@property (nonatomic, readonly) unsigned long long priorityLevel;
@property (nonatomic, readonly) long long windowingMode;

- (void).cxx_destruct;
- (unsigned long long)deactivationReasons;
- (id)description;
- (id)displayController;
- (id)initWithController:(id)arg1 windowingMode:(long long)arg2 priorityLevel:(unsigned long long)arg3 deactivationReasons:(unsigned long long)arg4;
- (unsigned long long)priorityLevel;
- (long long)windowingMode;

@end

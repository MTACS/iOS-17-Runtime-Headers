
@interface PLBackgroundJobStatusRegistrationEvent : PLBackgroundJobStatusEvent {
    bool  _registeredActivity;
    NSString * _registeredPriorities;
    NSArray * _workersResponsible;
}

@property bool registeredActivity;
@property (retain) NSString *registeredPriorities;
@property (retain) NSArray *workersResponsible;

- (void).cxx_destruct;
- (bool)registeredActivity;
- (id)registeredPriorities;
- (void)setRegisteredActivity:(bool)arg1;
- (void)setRegisteredPriorities:(id)arg1;
- (void)setWorkersResponsible:(id)arg1;
- (id)statusDump;
- (id)workersResponsible;

@end

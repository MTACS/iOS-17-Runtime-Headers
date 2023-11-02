
@interface URTDefaultDestinationPresentation : URTUserNotificationPresentation <URTDestinationPresenting> {
    URTAlert * _alert;
    <URTDestinationPresentationDelegate> * _delegate;
    long long  _destination;
    long long  _preferredPresentationStyle;
    struct __CFRunLoopSource { } * _runLoopSource;
}

@property (nonatomic, readonly) URTAlert *alert;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <URTDestinationPresentationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long preferredPresentationStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invokeDelegateForResponseFlags:(unsigned long long)arg1;
- (id)alert;
- (id)delegate;
- (long long)destination;
- (id)initWithAlert:(id)arg1 forDestination:(long long)arg2 preferredPresentationStyle:(long long)arg3;
- (void)invalidate;
- (long long)preferredPresentationStyle;
- (void)present;
- (void)setDelegate:(id)arg1;

@end

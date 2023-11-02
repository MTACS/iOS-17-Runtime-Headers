
@interface WFOpenAppAction : WFAction <WFStandaloneShortcutAction>

@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)associatedAppBundleIdentifier;
- (void)finishRunningWithNoAppError;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;

@end


@interface HDXPCEventManager : NSObject {
    HDXPCEventPublisher * _authorizationPublisher;
}

- (void).cxx_destruct;
- (void)authorizationChangedForBundleIdentifier:(id)arg1;
- (id)init;

@end


@interface WFActionWillOpenURLTestingEvent : WFActionTestingEvent {
    NSURL * _URL;
    NSString * _bundleIdentifier;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)URL;
- (id)bundleIdentifier;
- (id)initWithAction:(id)arg1 URL:(id)arg2 bundleIdentifier:(id)arg3;

@end

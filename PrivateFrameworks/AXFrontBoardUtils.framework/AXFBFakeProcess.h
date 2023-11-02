
@interface AXFBFakeProcess : NSObject {
    NSString * _bundleIdentifier;
    AXFBFakeProcessState * _state;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) AXFBFakeProcessState *state;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end

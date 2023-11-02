
@interface IAMReceivedEventTriggerContext : NSObject <IAMTriggerContext> {
    NSString * _bundleIdentifier;
    <IAMEventProtocol> * _event;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <IAMEventProtocol> *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)event;
- (id)initWithEvent:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)satisfiesPresentationTrigger:(id)arg1;

@end

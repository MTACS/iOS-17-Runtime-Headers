
@interface HFEventTriggerBuilderInterface : NSObject {
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

+ (id)interfaceWithBuilder:(id)arg1;

- (void).cxx_destruct;
- (id)initWithTriggerBuilder:(id)arg1;
- (id)triggerBuilder;

@end

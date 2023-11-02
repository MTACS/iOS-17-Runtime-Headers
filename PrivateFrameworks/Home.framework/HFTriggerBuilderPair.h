
@interface HFTriggerBuilderPair : NSObject {
    HMTriggerBuilder * _builder;
    HMTrigger * _trigger;
}

@property (nonatomic, readonly) HMTriggerBuilder *builder;
@property (nonatomic, readonly) HMTrigger *trigger;

+ (id)creatingTriggerWithBuilder:(id)arg1;
+ (id)updatingTrigger:(id)arg1 withBuilder:(id)arg2;

- (void).cxx_destruct;
- (void)_notifyObserversOfAddingTrigger:(id)arg1 inHome:(id)arg2;
- (void)_notifyObserversOfChangingTrigger:(id)arg1 inHome:(id)arg2;
- (id)builder;
- (id)commitBuilderInHome:(id)arg1;
- (id)initWithTrigger:(id)arg1 builder:(id)arg2;
- (id)trigger;

@end

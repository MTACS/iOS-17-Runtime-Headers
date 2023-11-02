
@interface HFEventBuilderLocationInterface : HFEventTriggerBuilderInterface {
    HFEventBuilder<HFLocationEventBuilder> * _locationEventBuilder;
}

@property (nonatomic, readonly) bool isCustomLocationTrigger;
@property (nonatomic, readonly) bool locationCanBeEdited;
@property (nonatomic, retain) HFEventBuilder<HFLocationEventBuilder> *locationEventBuilder;

- (void).cxx_destruct;
- (bool)isCustomLocationTrigger;
- (bool)locationCanBeEdited;
- (id)locationEventBuilder;
- (void)setLocationEventBuilder:(id)arg1;

@end

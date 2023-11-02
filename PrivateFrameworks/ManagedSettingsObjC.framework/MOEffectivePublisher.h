
@interface MOEffectivePublisher : MOPublisher {
    MOSettingsPublisherBase * _base;
}

@property (nonatomic, readonly) MOSettingsPublisherBase *base;

- (void).cxx_destruct;
- (id)base;
- (id)initWithInterestedGroups:(id)arg1;
- (id)sinkWithReceiveInput:(id /* block */)arg1;
- (id)sinkWithRecieveInput:(id /* block */)arg1;
- (void)subscribe:(id)arg1;

@end


@interface HMDSoftwareUpdateStartedEvent : HMMLogEvent {
    bool  _automaticUpdateEnabled;
}

@property (getter=isAutomaticUpdateEnabled, nonatomic) bool automaticUpdateEnabled;

+ (id)eventUpdateStartedWithAutomaticUpdateEnabled:(bool)arg1;

- (bool)isAutomaticUpdateEnabled;
- (void)setAutomaticUpdateEnabled:(bool)arg1;

@end

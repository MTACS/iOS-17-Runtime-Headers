
@interface HMDSoftwareUpdateAutomaticUpdateToggledEvent : HMMLogEvent {
    bool  _enabled;
}

@property (getter=isEnabled, nonatomic) bool enabled;

+ (id)eventWithAutomaticUpdateEnabled:(bool)arg1;

- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;

@end

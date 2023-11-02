
@interface HFAnalyticsResumeSetupExitOptionsEvent : HFAnalyticsEvent {
    NSString * _accessoryType;
    NSNumber * _resumeSetupOption;
}

@property (nonatomic, retain) NSString *accessoryType;
@property (nonatomic, retain) NSNumber *resumeSetupOption;

- (void).cxx_destruct;
- (id)accessoryType;
- (id)initWithData:(id)arg1;
- (id)payload;
- (id)resumeSetupOption;
- (void)setAccessoryType:(id)arg1;
- (void)setResumeSetupOption:(id)arg1;

@end

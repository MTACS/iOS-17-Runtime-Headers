
@interface BFFTimeRemainingController : OBSetupAssistantProgressController {
    NSDateComponentsFormatter * _durationFormatter;
}

@property (retain) NSDateComponentsFormatter *durationFormatter;

- (void).cxx_destruct;
- (id)durationFormatter;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (void)setDurationFormatter:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setTimeRemainingEstimate:(double)arg1;
- (id)timeRemainingString:(double)arg1;
- (void)viewDidLoad;

@end

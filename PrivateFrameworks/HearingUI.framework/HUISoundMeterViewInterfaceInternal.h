
@interface HUISoundMeterViewInterfaceInternal : NSObject {
    void data;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  soundMeterView;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfigurationType:(long long)arg1;
- (id)soundMeterViewController;
- (void)updateViewsWithSlowLeq:(double)arg1 fastLeq:(double)arg2 thresholdLevel:(unsigned long long)arg3;

@end

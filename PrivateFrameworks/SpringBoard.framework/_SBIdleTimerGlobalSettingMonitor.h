
@interface _SBIdleTimerGlobalSettingMonitor : NSObject {
    <_SBIdleTimerGlobalSettingMonitorDelegate> * _delegate;
    NSString * _label;
}

@property (nonatomic) <_SBIdleTimerGlobalSettingMonitorDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *label;

- (void).cxx_destruct;
- (bool)_updateCache;
- (id)delegate;
- (id)formattedValue;
- (id)initWithLabel:(id)arg1 delegate:(id)arg2;
- (id)label;
- (void)setDelegate:(id)arg1;

@end

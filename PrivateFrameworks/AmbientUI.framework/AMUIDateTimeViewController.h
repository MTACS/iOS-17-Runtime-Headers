
@interface AMUIDateTimeViewController : UIViewController <AMUIOpacityAdjusting> {
    <AMUIDateProviding> * _dateProvider;
    id  _dateProviderToken;
    AMUIDateTimeView * _dateTimeView;
    bool  _disablesUpdates;
    BSUIVibrancyEffectView * _vibrancyView;
}

@property (nonatomic, retain) <AMUIDateProviding> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (nonatomic, readonly) UIView *viewForOpacityAdjustment;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_dateTimeViewIfExists;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (void)_updateViewWithDate:(id)arg1;
- (id)dateProvider;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setDateProvider:(id)arg1;
- (void)setVibrancyConfiguration:(id)arg1;
- (id)vibrancyConfiguration;
- (id)viewForOpacityAdjustment;

@end

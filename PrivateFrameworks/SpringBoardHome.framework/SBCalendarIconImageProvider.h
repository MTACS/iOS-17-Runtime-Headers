
@interface SBCalendarIconImageProvider : NSObject <SBFDateTimeOverrideObserver> {
    SBFDateTimeController * _dateTimeController;
    <SBCalendarIconImageProviderDelegate> * _delegate;
}

@property (nonatomic, readonly) SBFDateTimeController *dateTimeController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBCalendarIconImageProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setSignificantTimeChangeNotificationName:(id)arg1;
+ (id)significantTimeChangeNotificationName;

- (void).cxx_destruct;
- (void)_startListeningForSignificantTimeChanges;
- (void)_stopListeningForSignificantTimeChanges;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (id)dateTimeController;
- (void)dealloc;
- (id)delegate;
- (id)iconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)init;
- (id)initWithDateTimeController:(id)arg1;
- (void)localeChanged;
- (id)preparedISIcon;
- (void)reloadIconImage;
- (void)setDelegate:(id)arg1;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;

@end

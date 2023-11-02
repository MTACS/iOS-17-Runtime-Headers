
@interface HUCameraDateDisplayController : NSObject {
    NSCalendar * _calendar;
    NSDate * _currentDate;
    NSDateComponents * _currentDateComponents;
    unsigned long long  _dateDisplayType;
    bool  _dayHasChanged;
    <HUActsAsLabel> * _dayLabel;
    unsigned int  _minuteUnitFlags;
    unsigned int  _secondUnitFlags;
    <HUActsAsLabel> * _timeLabel;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSDate *currentDate;
@property (nonatomic, retain) NSDateComponents *currentDateComponents;
@property (nonatomic) unsigned long long dateDisplayType;
@property (nonatomic) bool dayHasChanged;
@property (nonatomic) <HUActsAsLabel> *dayLabel;
@property (nonatomic) unsigned int minuteUnitFlags;
@property (nonatomic) unsigned int secondUnitFlags;
@property (nonatomic) <HUActsAsLabel> *timeLabel;

- (void).cxx_destruct;
- (bool)_isSameMinuteAsDate:(id)arg1;
- (bool)_isSameSecondAsDate:(id)arg1;
- (void)_resetLabels;
- (bool)_shouldUpdateDisplayWithDate:(id)arg1;
- (void)_updateDayLabel;
- (void)_updateTimeLabel;
- (id)calendar;
- (id)currentDate;
- (id)currentDateComponents;
- (unsigned long long)dateDisplayType;
- (bool)dayHasChanged;
- (id)dayLabel;
- (id)initWithDayOfWeekLabel:(id)arg1 timeLabel:(id)arg2;
- (unsigned int)minuteUnitFlags;
- (unsigned int)secondUnitFlags;
- (void)setCalendar:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (void)setCurrentDateComponents:(id)arg1;
- (void)setDateDisplayType:(unsigned long long)arg1;
- (void)setDayHasChanged:(bool)arg1;
- (void)setDayLabel:(id)arg1;
- (void)setMinuteUnitFlags:(unsigned int)arg1;
- (void)setSecondUnitFlags:(unsigned int)arg1;
- (void)setTimeLabel:(id)arg1;
- (id)timeLabel;
- (void)updateDisplayDateWithDate:(id)arg1 forType:(unsigned long long)arg2;

@end

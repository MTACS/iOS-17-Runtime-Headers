
@interface CUIKCalendarModelSceneState : NSObject {
    int  _dayViewFirstVisibleSecond;
    double  _dayViewHourScale;
    long long  _lastUsedNonYearView;
    bool  _showDayAsList;
    bool  _showMonthAsDivided;
    long long  _weekViewFirstVisibleSecond;
    double  _weekViewHourScale;
}

@property (nonatomic) int dayViewFirstVisibleSecond;
@property (nonatomic) double dayViewHourScale;
@property (nonatomic) long long lastUsedNonYearView;
@property (nonatomic) bool showDayAsList;
@property (nonatomic) bool showMonthAsDivided;
@property (nonatomic) long long weekViewFirstVisibleSecond;
@property (nonatomic) double weekViewHourScale;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (int)dayViewFirstVisibleSecond;
- (double)dayViewHourScale;
- (id)init;
- (long long)lastUsedNonYearView;
- (void)setDayViewFirstVisibleSecond:(int)arg1;
- (void)setDayViewHourScale:(double)arg1;
- (void)setLastUsedNonYearView:(long long)arg1;
- (void)setShowDayAsList:(bool)arg1;
- (void)setShowMonthAsDivided:(bool)arg1;
- (void)setWeekViewFirstVisibleSecond:(long long)arg1;
- (void)setWeekViewHourScale:(double)arg1;
- (bool)showDayAsList;
- (bool)showMonthAsDivided;
- (long long)weekViewFirstVisibleSecond;
- (double)weekViewHourScale;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)asCalendarModelSceneState;

@end

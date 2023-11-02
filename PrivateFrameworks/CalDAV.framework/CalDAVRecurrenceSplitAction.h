
@interface CalDAVRecurrenceSplitAction : NSObject <CoreDAVChangeContextHolding> {
    id  _changeContext;
    bool  _isAllDay;
    bool  _isFloating;
    NSDate * _recurrenceDate;
    NSURL * _resourceURL;
    NSString * _uidForCreatedSeries;
}

@property (nonatomic, retain) id changeContext;
@property (nonatomic, readonly) bool isAllDay;
@property (nonatomic, readonly) bool isFloating;
@property (nonatomic, readonly) NSDate *recurrenceDate;
@property (nonatomic, readonly) NSURL *resourceURL;
@property (nonatomic, readonly) NSString *uidForCreatedSeries;

- (void).cxx_destruct;
- (id)changeContext;
- (id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 uidForCreatedSeries:(id)arg3 floating:(bool)arg4 allday:(bool)arg5;
- (bool)isAllDay;
- (bool)isFloating;
- (id)recurrenceDate;
- (id)resourceURL;
- (void)setChangeContext:(id)arg1;
- (id)uidForCreatedSeries;

@end

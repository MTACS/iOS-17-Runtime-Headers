
@interface CALNTriggeredEventNotificationInfo : NSObject {
    bool  _allowsLocationAlerts;
    NSString * _calendarIdentifier;
    NSURL * _conferenceURL;
    NSDate * _endDate;
    bool  _eventHasAlarms;
    NSString * _eventID;
    NSString * _eventObjectID;
    NSString * _eventOccurrenceID;
    NSDictionary * _eventRepresentationDictionary;
    bool  _forceDisplayOfNewTravelAdvisoryHypotheses;
    bool  _hasSuggestedLocation;
    bool  _isAllDay;
    bool  _isTimeSensitive;
    NSString * _legacyIdentifier;
    NSString * _location;
    NSString * _locationWithoutPrediction;
    NSURL * _mailtoURL;
    EKStructuredLocation * _preferredLocation;
    NSDate * _startDate;
    NSString * _title;
}

@property (nonatomic, readonly) bool allowsLocationAlerts;
@property (nonatomic, readonly, copy) NSString *calendarIdentifier;
@property (nonatomic, readonly, copy) NSURL *conferenceURL;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly) bool eventHasAlarms;
@property (nonatomic, readonly, copy) NSString *eventID;
@property (nonatomic, readonly, copy) NSString *eventObjectID;
@property (nonatomic, readonly, copy) NSString *eventOccurrenceID;
@property (nonatomic, readonly, copy) NSDictionary *eventRepresentationDictionary;
@property (nonatomic, readonly) bool forceDisplayOfNewTravelAdvisoryHypotheses;
@property (nonatomic, readonly) bool hasSuggestedLocation;
@property (nonatomic, readonly) bool isAllDay;
@property (nonatomic, readonly) bool isTimeSensitive;
@property (nonatomic, readonly, copy) NSString *legacyIdentifier;
@property (nonatomic, readonly, copy) NSString *location;
@property (nonatomic, readonly, copy) NSString *locationWithoutPrediction;
@property (nonatomic, readonly, copy) NSURL *mailtoURL;
@property (nonatomic, readonly) EKStructuredLocation *preferredLocation;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (bool)allowsLocationAlerts;
- (id)calendarIdentifier;
- (id)conferenceURL;
- (id)description;
- (id)endDate;
- (bool)eventHasAlarms;
- (id)eventID;
- (id)eventObjectID;
- (id)eventOccurrenceID;
- (id)eventRepresentationDictionary;
- (bool)forceDisplayOfNewTravelAdvisoryHypotheses;
- (bool)hasSuggestedLocation;
- (id)initWithTitle:(id)arg1 location:(id)arg2 locationWithoutPrediction:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 isAllDay:(bool)arg6 isTimeSensitive:(bool)arg7 eventID:(id)arg8 eventOccurrenceID:(id)arg9 eventObjectID:(id)arg10 calendarIdentifier:(id)arg11 eventRepresentationDictionary:(id)arg12 legacyIdentifier:(id)arg13 preferredLocation:(id)arg14 conferenceURL:(id)arg15 mailtoURL:(id)arg16 hasSuggestedLocation:(bool)arg17 eventHasAlarms:(bool)arg18 allowsLocationAlerts:(bool)arg19 forceDisplayOfNewTravelAdvisoryHypotheses:(bool)arg20;
- (bool)isAllDay;
- (bool)isTimeSensitive;
- (id)legacyIdentifier;
- (id)location;
- (id)locationWithoutPrediction;
- (id)mailtoURL;
- (id)preferredLocation;
- (id)startDate;
- (id)title;

@end

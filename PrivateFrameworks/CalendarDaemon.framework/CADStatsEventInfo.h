
@interface CADStatsEventInfo : NSObject {
    bool  _hasClientLocation;
    bool  _hasLocation;
    bool  _hasPredictedLocation;
    bool  _hasRecurrenceRules;
    bool  _isAllDay;
    bool  _isBirthday;
    bool  _isCandidateForTravelAdvisories;
    bool  _isDetached;
    bool  _isHoliday;
    bool  _isImmediatelyEligibleForTravelAdvisories;
    bool  _isOnCalendarIgnoringEventAlerts;
    bool  _isOnSharedCalendar;
    bool  _locationHasKnownSpatialData;
    long long  _participationStatus;
    bool  _preferredLocationIsAConferenceRoom;
    long long  _travelAdvisoryBehavior;
}

@end


@interface CADStatsOccurrenceInfo : NSObject {
    double  _durationInMinutes;
    bool  _hasClientLocation;
    bool  _hasConferenceRoomLocation;
    bool  _hasLocation;
    bool  _hasLocationWithKnownSpatialData;
    bool  _hasNonDefaultAlarm;
    bool  _hasNotes;
    bool  _hasPredictedLocation;
    bool  _hasResponseComment;
    bool  _hasURL;
    bool  _isAllDay;
    bool  _isBirthday;
    bool  _isCandidateForTravelAdvisories;
    bool  _isHoliday;
    bool  _isImmediatelyEligibleForTravelAdvisories;
    bool  _isOnCalendarThatSuppressesAlerts;
    bool  _isOnSharedCalendar;
    double  _minutesUntilEnd;
    double  _minutesUntilStart;
    unsigned long long  _numAttendees;
    bool  _organizerIsSelf;
    long long  _participationStatus;
    long long  _status;
    long long  _travelAdvisoryBehavior;
}

@end

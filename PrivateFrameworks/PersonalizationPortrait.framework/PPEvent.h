
@interface PPEvent : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _backingPlists;
    PPCalendar * _calendar;
    unsigned long long  _indexInBackingPlists;
}

@property (nonatomic, readonly) NSArray *attendees;
@property (nonatomic, readonly) BOOL availability;
@property (nonatomic, readonly) PPCalendar *calendar;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned char eventFlags;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) NSURL *externalURI;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) NSString *notes;
@property (nonatomic, readonly) EKObjectID *objectID;
@property (nonatomic, readonly) NSString *organizerName;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *structuredLocationAddress;
@property (nonatomic, readonly) CLLocation *structuredLocationCoordinates;
@property (nonatomic, readonly) NSString *structuredLocationTitle;
@property (nonatomic, readonly) unsigned char suggestedEventCategory;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (id)convertBatchOfEKEvents:(id)arg1 calendarInternPool:(id)arg2;
+ (id)convertBatchOfEKEvents:(id)arg1 calendarInternPool:(id)arg2 interningSet:(id)arg3;
+ (id /* block */)deferredAllocationEventFromEKEvent:(id)arg1;
+ (id)descriptionForSuggestedEventCategory:(unsigned char)arg1;
+ (unsigned char)suggestedEventCategoryFromMetadata:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attendees;
- (BOOL)availability;
- (id)calendar;
- (long long)compareStartDateWithEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned char)eventFlags;
- (id)eventIdentifier;
- (id)externalURI;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKEvent:(id)arg1 calendarInternPool:(id)arg2;
- (id)initWithEventIdentifier:(id)arg1 objectID:(id)arg2 title:(id)arg3 location:(id)arg4 calendar:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 availability:(BOOL)arg8 externalURI:(id)arg9 attendees:(id)arg10 organizerName:(id)arg11 eventFlags:(unsigned char)arg12 notes:(id)arg13 url:(id)arg14 structuredLocationTitle:(id)arg15 structuredLocationAddress:(id)arg16 structuredLocationCoordinates:(id)arg17 suggestedEventCategory:(unsigned char)arg18;
- (id)initWithEventIdentifier:(id)arg1 objectID:(id)arg2 title:(id)arg3 location:(id)arg4 calendar:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 availability:(BOOL)arg8 externalURIString:(id)arg9 attendees:(id)arg10 organizerName:(id)arg11 eventFlags:(unsigned char)arg12 notes:(id)arg13 urlString:(id)arg14 structuredLocationTitle:(id)arg15 structuredLocationAddress:(id)arg16 structuredLocationCoordinates:(id)arg17 suggestedEventCategory:(unsigned char)arg18;
- (id)initWithIndex:(unsigned long long)arg1 inBackingPlists:(id)arg2 calendar:(id)arg3;
- (id)initWithPlist:(id)arg1 calendar:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isNLEvent;
- (bool)isStructuredEvent;
- (id)location;
- (id)notes;
- (id)objectID;
- (bool)organizerIsCurrentUser;
- (id)organizerName;
- (id)plist;
- (bool)representsUnscheduledFreeTime;
- (id)startDate;
- (id)structuredLocationAddress;
- (id)structuredLocationCoordinates;
- (id)structuredLocationTitle;
- (unsigned char)suggestedEventCategory;
- (id)title;
- (id)url;

@end

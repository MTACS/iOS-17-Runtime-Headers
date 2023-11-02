
@interface CADEventPredicate : EKPredicate <EKPredicateEvaluating, EKPredicateExpanding, NSSecureCoding> {
    bool  _excludeAllDayEvents;
    bool  _excludeDeclined;
    bool  _excludeDeclinedUnlessProposed;
    bool  _excludeNoAttendeeEvents;
    bool  _excludeNoLocationEvents;
    bool  _excludeProposed;
    bool  _excludeTimedEvents;
    NSSet * _filteredOutTitles;
    long long  _limit;
    unsigned long long  _propertyLoadMode;
    bool  _randomize;
    bool  _shouldLoadProposedTimesInRange;
}

@property (nonatomic, readonly) NSString *eventUUID;
@property (nonatomic) bool excludeAllDayEvents;
@property (nonatomic) bool excludeDeclined;
@property (nonatomic) bool excludeDeclinedUnlessProposed;
@property (nonatomic) bool excludeNoAttendeeEvents;
@property (nonatomic) bool excludeNoLocationEvents;
@property (nonatomic) bool excludeProposed;
@property (nonatomic) bool excludeTimedEvents;
@property (nonatomic, retain) NSSet *filteredOutTitles;
@property (nonatomic) long long limit;
@property (nonatomic, readonly) unsigned long long propertyLoadMode;
@property (nonatomic) bool randomize;
@property (nonatomic, readonly) bool shouldLoadProposedTimesInRange;
@property (nonatomic, readonly) NSTimeZone *timeZone;

// Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 propertyLoadMode:(unsigned long long)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)beginSignpostWithHandle:(id)arg1 signpostID:(unsigned long long)arg2;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)eventUUID;
- (bool)excludeAllDayEvents;
- (bool)excludeDeclined;
- (bool)excludeDeclinedUnlessProposed;
- (bool)excludeNoAttendeeEvents;
- (bool)excludeNoLocationEvents;
- (bool)excludeProposed;
- (bool)excludeTimedEvents;
- (id)filteredOutTitles;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 propertyLoadMode:(unsigned long long)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
- (bool)isEqual:(id)arg1;
- (long long)limit;
- (id)predicateFormat;
- (unsigned long long)propertyLoadMode;
- (bool)randomize;
- (id)relatedObjectPropertiesToLoad;
- (void)setExcludeAllDayEvents:(bool)arg1;
- (void)setExcludeDeclined:(bool)arg1;
- (void)setExcludeDeclinedUnlessProposed:(bool)arg1;
- (void)setExcludeNoAttendeeEvents:(bool)arg1;
- (void)setExcludeNoLocationEvents:(bool)arg1;
- (void)setExcludeProposed:(bool)arg1;
- (void)setExcludeTimedEvents:(bool)arg1;
- (void)setFilteredOutTitles:(id)arg1;
- (void)setLimit:(long long)arg1;
- (void)setRandomize:(bool)arg1;
- (bool)shouldLoadProposedTimesInRange;
- (id)timeZone;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (void)_addEventOccurrenceAndProposedTimeOccurrenceFor:(id)arg1 withOccurrenceStartDate:(id)arg2 toResults:(id)arg3 excludeProposed:(bool)arg4 excludeDeclinedUnlessProposed:(bool)arg5;

- (bool)ekPredicateEvaluateWithObject:(id)arg1;
- (void)expandWithObjectsPendingCommit:(id)arg1 deletedObjectIDs:(id)arg2 andResultArray:(id)arg3;

@end

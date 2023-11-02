
@interface CADPropertySearchPredicate : CADPredicate <EKPredicateEvaluating> {
    NSArray * _calendarIDs;
    NSDictionary * _calendarRowIDsByDatabaseID;
    int  _entityType;
    NSArray * _filters;
    long long  _limit;
    bool  _randomize;
    CADObjectID * _sourceID;
}

@property (nonatomic, readonly) NSArray *calendarIDs;
@property (nonatomic, readonly) int entityType;
@property (nonatomic, readonly) NSArray *filters;
@property (nonatomic, readonly) long long limit;
@property (nonatomic, readonly) bool randomize;
@property (nonatomic, readonly) CADObjectID *sourceID;

// Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buildWhereClauseWithValues:(id)arg1 andTypes:(id)arg2 forDatabase:(int)arg3;
- (id)calendarIDs;
- (id)calendarRowIDsByDatabaseID;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1;
- (id)databasesToQuery;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (int)entityType;
- (id)extendWhereClauseWithCalendarOrSourceLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3 forDatabase:(int)arg4;
- (id)extendWhereClauseWithEntityTypeLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3;
- (id)filters;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendar:(id)arg3;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3 limit:(long long)arg4 randomize:(bool)arg5;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3 source:(id)arg4;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3 source:(id)arg4 limit:(long long)arg5 randomize:(bool)arg6;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 source:(id)arg3;
- (long long)limit;
- (id)predicateFormat;
- (bool)randomize;
- (id)sourceID;
- (bool)validate;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (bool)ekPredicateEvaluateWithObject:(id)arg1;

@end

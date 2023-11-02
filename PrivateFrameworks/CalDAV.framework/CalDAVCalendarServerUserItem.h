
@interface CalDAVCalendarServerUserItem : CoreDAVItem {
    NSURL * _acceptedURL;
    CalDAVCalendarServerAccessItem * _access;
    CoreDAVLeafItem * _commonName;
    NSString * _firstName;
    CoreDAVHrefItem * _href;
    CoreDAVItemWithNoChildren * _inviteStatus;
    NSString * _lastName;
    CoreDAVLeafItem * _summary;
}

@property (nonatomic, retain) NSURL *acceptedURL;
@property (nonatomic, retain) CalDAVCalendarServerAccessItem *access;
@property (nonatomic, retain) CoreDAVLeafItem *commonName;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) CoreDAVHrefItem *href;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *inviteStatus;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) CoreDAVLeafItem *summary;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (void).cxx_destruct;
- (id)acceptedURL;
- (id)access;
- (id)commonName;
- (long long)compare:(id)arg1;
- (id)copyParseRules;
- (id)description;
- (id)firstName;
- (id)href;
- (id)init;
- (id)initWithHREF:(id)arg1 commonName:(id)arg2 inviteStatus:(int)arg3 access:(int)arg4;
- (id)inviteStatus;
- (id)lastName;
- (void)setAcceptedURL:(id)arg1;
- (void)setAcceptedURLItem:(id)arg1;
- (void)setAccess:(id)arg1;
- (void)setCommonName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFirstNameItem:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setInviteStatus:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

// Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV

- (id)initWithREMSharee:(id)arg1;
- (id)rem_shareeForREMList:(id)arg1;
- (id)rem_updatedREMShareeFromREMSharee:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV

- (void*)createCalShareeInDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1 andCalendar:(void*)arg2;
- (id)initWithCalSharee:(void*)arg1;
- (bool)updateCalSharee:(void*)arg1;

@end

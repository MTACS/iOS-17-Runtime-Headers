
@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation <CalCancellationToken> {
    id /* block */  _completion;
    ClientConnection * _connection;
    int  _entityType;
    int  _fetchIdentifier;
    CADPredicate * _predicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int fetchIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;

+ (bool)isJunkEvent:(void*)arg1;
+ (id)performSynchronouslyWithPredicate:(id)arg1 entityType:(int)arg2 connection:(id)arg3 fetchIdentifier:(int)arg4 cancellationToken:(id)arg5;
+ (void)queryDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1 withID:(int)arg2 predicate:(id)arg3 connection:(id)arg4 serializer:(id)arg5 cancellationToken:(id)arg6;

- (void).cxx_destruct;
- (void)cancel;
- (int)fetchIdentifier;
- (id)initWithPredicate:(id)arg1 entityType:(int)arg2 connection:(id)arg3 fetchIdentifier:(int)arg4 completionHandler:(id /* block */)arg5;
- (void)main;

@end

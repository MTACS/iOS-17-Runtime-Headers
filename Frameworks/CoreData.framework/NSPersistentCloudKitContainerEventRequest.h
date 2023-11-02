
@interface NSPersistentCloudKitContainerEventRequest : NSPersistentStoreRequest {
    NSFetchRequest * _ckEventFetchRequest;
    long long  _resultType;
}

@property long long resultType;

+ (id)fetchEventsAfterDate:(id)arg1;
+ (id)fetchEventsAfterEvent:(id)arg1;
+ (id)fetchEventsMatchingFetchRequest:(id)arg1;
+ (id)fetchRequestForEvents;

- (void)dealloc;
- (id)initWithCKEventFetchRequest:(id)arg1;
- (unsigned long long)requestType;
- (long long)resultType;
- (void)setResultType:(long long)arg1;

@end

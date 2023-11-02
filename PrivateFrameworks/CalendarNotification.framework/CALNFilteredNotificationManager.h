
@interface CALNFilteredNotificationManager : NSObject <CALNNotificationManager> {
    id /* block */  _predicate;
    <CALNNotificationManager> * _wrappedNotificationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isProtectedDataAvailable;
@property (nonatomic, readonly) id /* block */ predicate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CALNNotificationManager> *wrappedNotificationManager;

- (void).cxx_destruct;
- (void)addRecord:(id)arg1;
- (id)fetchRecordsWithSourceIdentifier:(id)arg1;
- (id)initWithWrappedNotificationManager:(id)arg1 predicate:(id /* block */)arg2;
- (bool)isProtectedDataAvailable;
- (id /* block */)predicate;
- (void)removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (void)updateRecord:(id)arg1;
- (id)wrappedNotificationManager;

@end

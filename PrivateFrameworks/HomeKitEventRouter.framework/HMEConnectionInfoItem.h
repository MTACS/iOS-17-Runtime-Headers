
@interface HMEConnectionInfoItem : NSObject {
    id  _connection;
    NSDate * _debounceStartTime;
    NSDate * _expiry;
    bool  _hasPendingRequest;
    NSUUID * _identifier;
    HMEPendingEventsCollection * _pendingCachedEventItems;
    HMEPendingEventsCollection * _pendingEventItems;
}

@property (nonatomic) id connection;
@property (nonatomic, retain) NSDate *debounceStartTime;
@property (nonatomic, retain) NSDate *expiry;
@property (nonatomic) bool hasPendingRequest;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) HMEPendingEventsCollection *pendingCachedEventItems;
@property (nonatomic, readonly) HMEPendingEventsCollection *pendingEventItems;

- (void).cxx_destruct;
- (id)connection;
- (id)debounceStartTime;
- (id)expiry;
- (bool)hasPendingRequest;
- (id)identifier;
- (id)initWithConnection:(id)arg1 expiry:(id)arg2;
- (id)pendingCachedEventItems;
- (id)pendingEventItems;
- (void)setConnection:(id)arg1;
- (void)setDebounceStartTime:(id)arg1;
- (void)setExpiry:(id)arg1;
- (void)setHasPendingRequest:(bool)arg1;

@end

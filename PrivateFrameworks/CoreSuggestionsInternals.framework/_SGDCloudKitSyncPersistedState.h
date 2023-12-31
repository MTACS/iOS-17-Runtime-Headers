
@interface _SGDCloudKitSyncPersistedState : NSObject <NSSecureCoding> {
    id /* block */  _changeCallback;
    NSNumber * _eventsWereRemovedFromEventKit;
    NSNumber * _hasDeferredProcessStateChanges;
    NSNumber * _hasDeferredSync;
    NSNumber * _hasSubscription;
    NSString * _primaryICloudCalendarAccount;
    NSData * _salt;
    CKRecordID * _saltAtomicReferenceId;
    NSNumber * _saltUsesManatee;
    CKServerChangeToken * _syncToken;
}

@property (nonatomic, copy) id /* block */ changeCallback;
@property (nonatomic, retain) NSNumber *eventsWereRemovedFromEventKit;
@property (nonatomic, retain) NSNumber *hasDeferredProcessStateChanges;
@property (nonatomic, retain) NSNumber *hasDeferredSync;
@property (nonatomic, retain) NSNumber *hasSubscription;
@property (nonatomic, retain) NSString *primaryICloudCalendarAccount;
@property (nonatomic, retain) NSData *salt;
@property (nonatomic, retain) CKRecordID *saltAtomicReferenceId;
@property (nonatomic, retain) NSNumber *saltUsesManatee;
@property (nonatomic, retain) CKServerChangeToken *syncToken;

+ (id)properties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (SEL)_getterForProperty:(struct objc_property { }*)arg1;
- (SEL)_setterForProperty:(struct objc_property { }*)arg1;
- (id /* block */)changeCallback;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventsWereRemovedFromEventKit;
- (id)hasDeferredProcessStateChanges;
- (id)hasDeferredSync;
- (id)hasSubscription;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)primaryICloudCalendarAccount;
- (id)salt;
- (id)saltAtomicReferenceId;
- (id)saltUsesManatee;
- (void)setChangeCallback:(id /* block */)arg1;
- (void)setEventsWereRemovedFromEventKit:(id)arg1;
- (void)setHasDeferredProcessStateChanges:(id)arg1;
- (void)setHasDeferredSync:(id)arg1;
- (void)setHasSubscription:(id)arg1;
- (void)setPrimaryICloudCalendarAccount:(id)arg1;
- (void)setSalt:(id)arg1;
- (void)setSaltAtomicReferenceId:(id)arg1;
- (void)setSaltUsesManatee:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (void)setupKvo;
- (void)stopKvo;
- (id)syncToken;

@end

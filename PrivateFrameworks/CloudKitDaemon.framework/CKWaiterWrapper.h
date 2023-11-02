
@interface CKWaiterWrapper : NSObject {
    NSObject<OS_os_activity> * _activity;
    NSString * _personaID;
    id /* block */  _waitCompletedHandler;
    <CKDZoneGatekeeperWaiter> * _waiter;
    NSArray * _zoneIDs;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly) NSString *personaID;
@property (nonatomic, readonly) id /* block */ waitCompletedHandler;
@property (nonatomic, readonly) <CKDZoneGatekeeperWaiter> *waiter;
@property (nonatomic, readonly) NSArray *zoneIDs;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)activity;
- (id)description;
- (id)initWithWaiter:(id)arg1 zoneIDs:(id)arg2 waitCompletedHandler:(id /* block */)arg3 activity:(id)arg4;
- (void)invokeWaitCompletedHandler:(bool)arg1;
- (id)personaID;
- (id /* block */)waitCompletedHandler;
- (id)waiter;
- (id)zoneIDs;

@end

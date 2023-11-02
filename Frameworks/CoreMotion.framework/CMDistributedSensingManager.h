
@interface CMDistributedSensingManager : NSObject {
    <CMDistributedSensingDelegate> * _delegate;
    CMDistributedSensingManagerInternal * _internal;
}

@property (nonatomic, readonly) CMDistributedSensingManagerInternal *_internal;
@property (nonatomic) <CMDistributedSensingDelegate> *delegate;

+ (bool)isVehicleStateUpdatesAvailable;

- (id)_internal;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)subscribeToVehicleState;
- (void)unsubscribeToVehicleState;

@end

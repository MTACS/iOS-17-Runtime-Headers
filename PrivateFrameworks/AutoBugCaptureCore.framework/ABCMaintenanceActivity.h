
@interface ABCMaintenanceActivity : NSObject {
    id /* block */  _activityBlock;
    NSString * _activityIdentifier;
    NSObject<OS_dispatch_queue> * _activityQueue;
}

@property (nonatomic, copy) id /* block */ activityBlock;
@property (nonatomic, retain) NSString *activityIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *activityQueue;

- (void).cxx_destruct;
- (id /* block */)activityBlock;
- (id)activityIdentifier;
- (id)activityQueue;
- (void)setActivityBlock:(id /* block */)arg1;
- (void)setActivityIdentifier:(id)arg1;
- (void)setActivityQueue:(id)arg1;

@end

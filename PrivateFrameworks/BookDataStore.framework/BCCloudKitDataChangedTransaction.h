
@interface BCCloudKitDataChangedTransaction : BCCloudKitTransaction {
    NSString * _notificationName;
}

@property (nonatomic, copy) NSString *notificationName;

+ (id)transactionNameForEntityName:(id)arg1;

- (void).cxx_destruct;
- (double)coalescingDelay;
- (id)initWithEntityName:(id)arg1 notificationName:(id)arg2 delegate:(id)arg3;
- (id)notificationName;
- (void)performWorkWithCompletion:(id /* block */)arg1;
- (void)setNotificationName:(id)arg1;

@end

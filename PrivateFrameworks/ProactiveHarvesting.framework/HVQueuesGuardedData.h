
@interface HVQueuesGuardedData : NSObject {
    NSObject<OS_os_transaction> * _contentAvailableNotificationInProgress;
    unsigned int  _dataSourcesWithContentAvailable;
    NSMapTable * _observers;
    NSMutableDictionary * _queues;
}

- (void).cxx_destruct;
- (id)init;

@end

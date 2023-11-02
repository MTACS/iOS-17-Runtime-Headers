
@interface RemindersUICore.TTRRemindersListInteractor : NSObject <REMSaveRequestNotifyChangeDelegate> {
    void canChangeSortingStyle;
    void defaultListType;
    void delegate;
    void isUnitTestMode;
    void optimisticUpdatesDelegate;
    void removeTemplateCapability;
    void store;
}

@property (nonatomic, readonly) OS_dispatch_queue *callbackQueue;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)init;
- (void)notifyEventFromSaveRequest:(id)arg1;

@end

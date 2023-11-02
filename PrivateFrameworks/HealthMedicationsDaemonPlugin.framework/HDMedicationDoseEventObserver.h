
@interface HDMedicationDoseEventObserver : NSObject <HDDataObserver> {
    HDMedicationNotificationSyncManager * _notificationSyncManager;
    HDProfile * _profile;
    id /* block */  _samplesAddedDidRecheduleHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ samplesAddedDidRecheduleHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logDoseEventSamplesAdded:(id)arg1 anchor:(id)arg2;
- (bool)_rescheduleIfNecessaryWithDoseEvents:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 notificationSyncManager:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (id /* block */)samplesAddedDidRecheduleHandler;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setSamplesAddedDidRecheduleHandler:(id /* block */)arg1;

@end

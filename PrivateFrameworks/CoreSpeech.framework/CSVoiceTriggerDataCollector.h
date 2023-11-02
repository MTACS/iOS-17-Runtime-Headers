
@interface CSVoiceTriggerDataCollector : NSObject <CSSiriClientBehaviorMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate> {
    NSDate * _lastVTDisableDate;
    NSDate * _lastVTEnableDate;
    NSArray * _privacyApprovedFields;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _vteiList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastVTDisableDate;
@property (nonatomic, retain) NSDate *lastVTEnableDate;
@property (nonatomic, retain) NSArray *privacyApprovedFields;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *vteiList;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(bool)arg2;
- (void)_createAndSubmitRejectLoggingDictWithSource:(id)arg1 withPHSAcceptInfo:(id)arg2;
- (id)_filteredVTEIArray;
- (void)_submitToggleReport;
- (void)addVTAcceptEntryAndSubmit:(id)arg1;
- (void)addVTRejectEntry:(id)arg1 truncateData:(bool)arg2;
- (id)fetchVoiceTriggerHeartBeatMetrics;
- (id)init;
- (id)lastVTDisableDate;
- (id)lastVTEnableDate;
- (id)privacyApprovedFields;
- (id)queue;
- (void)setLastVTDisableDate:(id)arg1;
- (void)setLastVTEnableDate:(id)arg1;
- (void)setPrivacyApprovedFields:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVteiList:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;
- (id)vteiList;

@end


@interface PPEventMetricsLogger : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _interactionsWriteQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSMutableArray * _loggedInteractionsSummary;
    NSString * _path;
    NSObject<OS_dispatch_source> * _persistenceTimerSource;
    double  _storeCreationDate;
}

+ (id)defaultLogger;
+ (unsigned long long)numberOfDaysBetweenDate:(id)arg1 andDate:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createRTCReporting;
- (id)_descriptionForActionType:(unsigned short)arg1;
- (id)_descriptionForInterface:(unsigned short)arg1;
- (id)_descriptionForPPRTCCategory:(unsigned short)arg1;
- (bool)_incrementInteractionForEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (id)_interactionAttributesForEventHighlight:(id)arg1;
- (id)_interactionKeyForInterface:(unsigned short)arg1 actionType:(unsigned short)arg2;
- (bool)_removeInteractionsSummaryLogsFromLogsAndResetStoreAge:(id)arg1;
- (double)_storeAge;
- (id)allowedLogFromLog:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)eventsAndExtraordinaryEventsDictFromDate:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileName:(id)arg1;
- (void)logEventInteractionForEventHighlight:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logNewInteractionSummaryWithDictionary:(id)arg1;
- (id)loggedInteractionsSummaryMetrics;
- (id)logsToSend;
- (bool)resetLogs;
- (void)sendRTCLogsWithCompletion:(id /* block */)arg1;
- (bool)storeToDisk;
- (void)updateAndScheduleDiskWrite;

@end

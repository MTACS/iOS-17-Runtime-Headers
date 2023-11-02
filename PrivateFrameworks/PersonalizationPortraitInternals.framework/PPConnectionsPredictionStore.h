
@interface PPConnectionsPredictionStore : NSObject {
    PPConnectionsCalendarSource * _calendarSource;
    PPConnectionsDuetSource * _duetSource;
    PPConnectionsFoundInAppsSource * _fiaSource;
    PPConnectionsMetricsTracker * _metricsTracker;
    PPConnectionsNamedEntitySource * _namedEntitySource;
    PPConnectionsParameters * _parameters;
    PPConnectionsPasteboardSource * _pasteboardSource;
    NSObject<OS_dispatch_queue> * _predictionQueue;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParameters:(id)arg1 pasteboardSource:(id)arg2 calendarSource:(id)arg3 duetSource:(id)arg4 namedEntitySource:(id)arg5 fiaSource:(id)arg6 metricsTracker:(id)arg7;
- (id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id*)arg6;

@end

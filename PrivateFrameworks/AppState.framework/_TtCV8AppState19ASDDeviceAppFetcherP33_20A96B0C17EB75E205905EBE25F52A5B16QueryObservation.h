
@interface _TtCV8AppState19ASDDeviceAppFetcherP33_20A96B0C17EB75E205905EBE25F52A5B16QueryObservation : NSObject <ASDAppQueryResultsObserver> {
    void appQuery;
    void observer;
    void taskScheduler;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)appQuery:(id)arg1 resultsDidChange:(id)arg2;
- (id)description;
- (id)init;

@end

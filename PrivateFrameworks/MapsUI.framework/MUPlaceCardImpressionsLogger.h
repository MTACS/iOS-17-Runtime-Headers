
@interface MUPlaceCardImpressionsLogger : MUImpressionsLogger <MUImpressionsLogging> {
    NSObject<OS_dispatch_queue> * _isolationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)logImpressionElementDidEnter:(id)arg1 onDate:(id)arg2;
- (void)logImpressionElementDidExit:(id)arg1 usingEnterDate:(id)arg2 exitDate:(id)arg3;

@end

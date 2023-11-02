
@interface TPSEventsProviderManager : NSObject <TPSEventsProviderDelegate> {
    TPSBiomeEventsProvider * _biomeEventsProvider;
    TPSContentStatusEventsProvider * _contentStatusEventsProvider;
    <TPSDEventsProviderManagerDelegate> * _delegate;
    TPSDuetEventsProvider * _duetEventsProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TPSDEventsProviderManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultManager;

- (void).cxx_destruct;
- (long long)_dataTypeForDataProvider:(id)arg1;
- (void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2;
- (void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2;
- (id)delegate;
- (id)init;
- (void)queryEvents:(id)arg1 type:(long long)arg2;
- (void)registerCallbackForEvents:(id)arg1 type:(long long)arg2;
- (void)registerWakingCallbackForEvents:(id)arg1 type:(long long)arg2 clientIdentifier:(id)arg3;
- (void)setDelegate:(id)arg1;

@end

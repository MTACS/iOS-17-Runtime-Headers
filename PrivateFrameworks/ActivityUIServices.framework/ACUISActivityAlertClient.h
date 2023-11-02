
@interface ACUISActivityAlertClient : NSObject <ActivityUIServices.ActivityAlertClientDelegate> {
    _TtC18ActivityUIServices19ActivityAlertClient * _alertClient;
    <ACUISActivityAlertClientDelegate> * _delegate;
}

@property (nonatomic, retain) _TtC18ActivityUIServices19ActivityAlertClient *alertClient;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACUISActivityAlertClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityWithAlertClient:(id)arg1 dismissAlertProvider:(id)arg2;
- (void)activityWithAlertClient:(id)arg1 presentAlertProvider:(id)arg2 completion:(id /* block */)arg3;
- (id)alertClient;
- (id)delegate;
- (id)init;
- (void)setAlertClient:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
